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

    bool find = 0;

    for (tahminSayisi = 0; tahminSayisi < max_try_count;)
    {   
        printf("Lutfen bir harf giriniz\n");
        scanf(" %c", &guess);

        for (int i = 0; i < len; i++)
        {
            

            if (kelime[i] == guess)
            {
                inMind[i] = 1;
                find = 1;
            }
            
            
        }
        if (find == 0)
        {
            tahminSayisi++;
        }
        ekranaBastirma(inMind, kelime);

        if (inMind == kelime)
        {
            printf("Tebrikler! oyunu kazandiniz.");
            return 0;
        }
    }
}
