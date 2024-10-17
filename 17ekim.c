#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int arr[] = {5, 8, 3, 2, 9, 7, 1};
    int len = sizeof(arr) / sizeof(arr[0]);
    int tempVal;

    for (int i = 0; i <= len; i++)
    {

        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tempVal = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tempVal;
            }
        }
    }
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
