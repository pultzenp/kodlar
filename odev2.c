#include <stdio.h>
#include <string.h>

int main()
{
    char sesliHarfler[] = {'a', 'e', 'i', 'o', 'u', '\0'};
    char kelime[50];
    int toplam = 0;
    int len = strlen(sesliHarfler);

    printf("LutfenN bir kelime giriniz: ");
    scanf("%s", &kelime);

    for (int i = 0; i < len; i++)
    {
        if (sesliHarfler[] == kelime[i])
            toplam++;
    }

    printf("Girdiginiz %s kelimesindeki sesli harf sayisi %d dir..", kelime, toplam);

    return 0;
}