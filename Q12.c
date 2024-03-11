#include <stdio.h>

int main()
{
    char str[] = "Bansode";
    int len = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
        len++;
    }

    for (i = len - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}