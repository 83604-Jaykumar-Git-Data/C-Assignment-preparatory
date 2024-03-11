#include <stdio.h>
#include <string.h>

#define MAX_STRINGS 5

int main()
{
    char *strings[MAX_STRINGS] = {"jay", "vinay", "jay", "Ashu", "vinay"};
    int i, j;

    printf("Duplicate strings:\n");

    for (i = 0; i < MAX_STRINGS; ++i)
    {
        for (j = i + 1; j < MAX_STRINGS; ++j)
        {
            if (strcmp(strings[i], strings[j]) == 0)
            {
                printf("%s\n", strings[i]);
                break;
            }
        }
    }

    return 0;
}
