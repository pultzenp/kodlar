#include <stdlib.h>
#include <stdio.h>

int main()
{
    int value = rand();
    int girilensayi;
    printf("Lutfen bir sayi giriniz: ");
    scanf("%d", &girilensayi);

    if (girilensayi > value)
    {
        printf("Cok Yuksek..");
    }
    else if (girilensayi < value)
    {
        printf("Cok Dusuk..");
    }
    else
    {
        printf("Dogru Tahmin!");
    }

    return 0;
}