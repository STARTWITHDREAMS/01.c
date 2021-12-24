#include<stdio.h>
int main()
{
    char arr[30] = {0};
    char b[30] = {0};
    int i = 0;
    printf("Input Sentence:");
    gets(arr);
    char *p = arr;
    while (*p != 0)
    {
        int k = 0;
        if (*p != ' ')
        {
            while (*p != ' ' && *p != 0)
            {
                p++;
                k++;
            }
            for (int j = 1; j <= k; j++)
                b[i++] = *(p - j);
        }
        else
            b[i++] = *p++;
    }
    i--;
    p--;
    for ( ; i >= 0; i--)
        *(p - i) = b[i];
    printf("Output Reverse Sentence:%s", arr);
    return 0;
}

