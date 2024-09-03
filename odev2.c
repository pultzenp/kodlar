#include <stdio.h>
#include <string.h>

int main()
{
    char sesliHarfler[] = {'a', 'e', 'i', 'o', 'u'};
    char kelime[50];
    int toplam = 0;
    int len = strlen(sesliHarfler);

    printf("LutfenN bir kelime giriniz: ");
    scanf("%s", &kelime);

    int lenx = strlen(kelime);

    for (int i = 0; i < lenx; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (sesliHarfler[j] == kelime[i])
            {
                toplam++;
            }
        }
    }

    printf("Girdiginiz %s kelimesindeki sesli harf sayisi %d dir..", kelime, toplam);

    return 0;
}