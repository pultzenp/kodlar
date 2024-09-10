#include <stdio.h>

int sum(int x)
{
    if (x == 0 || x == 1)
    {
        return 0;
    }
    if (x % 2 == 0)
    {
        return x + sum(x - 2);
    }
    if (x % 2 != 0)
    {
        return sum(x-1);
    }
}
int main()
{
    int y;
    printf("Lutfen bir sayi giriniz: ");
    scanf("%d", &y);
    int result = sum(y);
    printf("Girdiginiz x sayisindan 0a kadar olan cift sayilarin toplami %d dir..", result);

    return 0;
}