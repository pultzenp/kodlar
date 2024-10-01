#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define max_try_count 10

void ekranaBastirma(bool inMind[], char kelime[])
{
    for (int i = 0; i < 5; i++)
    {
        if (inMind[i] == 1)
        {
            printf("%c", kelime[i]);
        }

        else
        {
            printf("_");
        }
    }
}

int main()
{
    char kelime[] = "ahmet";
    int len = strlen(kelime);
    char guess;
    int tahminSayisi = 0;

    bool inMind[5];

    for (int i = 0; i < 5; i++)
    {
        inMind[i] = 0;
    }

    while (tahminSayisi <= max_try_count)
    {
        printf("Lutfen bir harf giriniz: ");
        scanf("%c", guess);

        for (int i = 0; i < len; i++)
        {
            if (guess == kelime[i])
            {
                inMind[i] = 1;
            }
            if (guess = !kelime[i])
            {
                tahminSayisi++;
            }
        }
    }
}