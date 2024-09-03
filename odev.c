#include <stdio.h>
#include <string.h>

int main()
{
    char yazi[] = { 0 };
    printf("Lutfen bir kelime veya cumle giriniz: %c", yazi);
    scanf("%c", &yazi);

    if (yazi == yazi[::-1])
    {
        printf("Girdiginiz %c kelimesi veya cumlesi palindromdur..", yazi);
    }
    else
    {
        printf("Girdiginiz %c kelimesi veya cumlesi palindrom degildir..", yazi);
    }

    return 0;
}