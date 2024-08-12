for (size_t count = 0; count < 8; count++)
        {
            printf("%d", *(ap_str+i) >> count & 1);

            if (count=3)
            {
                printf(" ");
            }
        }
        