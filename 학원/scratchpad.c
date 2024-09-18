#ifndef UNICODE
#  define UNICODE
#endif // UNICODE
#include <stdlib.h> // EXIT_FAILURE
#include <windows.h>

LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

int APIENTRY wWinMain(
    HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR lpCmdLine, int nCmdShow)
{
  static wchar_t szAppName[] = L"HELLOWINDOWS";
  HWND           hWnd;
  MSG            msg;
  WNDCLASS       wndclass = {};

  wndclass.style         = CS_HREDRAW | CS_VREDRAW;
  wndclass.lpfnWndProc   = WndProc;
  wndclass.hInstance     = hInstance;
  wndclass.hIcon         = LoadIcon(NULL, IDI_APPLICATION);
  wndclass.hCursor       = LoadCursor(NULL, IDC_ARROW);
  wndclass.hbrBackground = (HBRUSH)GetStockObject(COLOR_WINDOW + 1);
  wndclass.lpszClassName = szAppName;

  if ( !RegisterClass(&wndclass) )
  {
    return EXIT_FAILURE;
  }

  hWnd = CreateWindowW(
      szAppName,
      L"Hello Windows Application",
      WS_OVERLAPPEDWINDOW,
      CW_USEDEFAULT,
      CW_USEDEFAULT,
      CW_USEDEFAULT,
      CW_USEDEFAULT,
      NULL,
      NULL,
      hInstance,
      NULL);
  ShowWindow(hWnd, nCmdShow);
  UpdateWindow(hWnd);

  while ( GetMessage(&msg, NULL, 0, 0) )
  {
    TranslateMessage(&msg);
    DispatchMessage(&msg);
  }

  return msg.wParam;
}

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
  HDC         hDC;
  PAINTSTRUCT ps;
  RECT        rect;

  switch ( message )
  {
  case WM_CREATE:
    return 0;
  case WM_PAINT:
    hDC = BeginPaint(hWnd, &ps);
    GetClientRect(hWnd, &rect);
    DrawText(
        hDC,
        TEXT("Hello, Windows!"),
        -1,
        &rect,
        DT_SINGLELINE | DT_CENTER | DT_VCENTER);
    EndPaint(hWnd, &ps);
    return 0;
  case WM_DESTROY:
    PostQuitMessage(0);
    return 0;
  }

  return DefWindowProc(hWnd, message, wParam, lParam);
}