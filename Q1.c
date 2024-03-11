#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number of elements: ");

    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    printf("Maximum value: %d\n", max);

    return 0;
}
