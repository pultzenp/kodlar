#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int arr[] = {5, 8, 3, 2, 9, 7, 1};
    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i <= len - 1; i++)
    {
        int min = arr[i];
        int min_ind = i;

        for (int j = i + 1; j < len; j++)
        {
            if (arr[j] < min)
            {
               min = arr[j];
               min_ind = j;            
            }
        
        }
    int temp = arr[i];
    arr[i] = arr[min_ind];
    arr[min_ind] = temp;


    }
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
