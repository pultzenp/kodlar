#include <stdio.h>

int power(int sayi, int us)
{
    if (us == 0)
    {
        return 1;
    }
    else if (us == 1)
    {
        return sayi;
    }
    return sayi * power(sayi, us-1);
}

int main()
{
    int x, y;
    printf("Enter a number and power you wish to raise it to:\n ");
    scanf("%d %d", &x, &y);
    printf("Result: %d\n", power(x, y));
    return 0;
}