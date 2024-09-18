#include <stdio.h>

int powerloop(int sayi, int us)
{
    int sonuc = 1;
    int i;
    for (i = 0; i < us; i++)
    {
        sonuc = sonuc * sayi;
    }
    return sonuc;
}

int main()
{
    int x, y;
    printf("Lutfen bir sayi giriniz: ");
    scanf("%d", &x);
    printf("Lutfen bir us giriniz: ");
    scanf("%d", &y);
    int sonuc = powerloop(x, y);
    printf("Girdiginiz islemin sonucu %d dir..", sonuc);
    return 0;
}