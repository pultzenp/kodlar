#include <stdio.h>
#include <string.h>

void encrypt(char metin[], int seek)
{
    int len = strlen(metin);

    for (int i = 0; i < len; i++)
    {
        metin[i] = metin[i] + seek;
    }
}

void decrypt(char metin[], int seek)
{
    int len = strlen(metin);

    for (int i = 0; i < len; i++)
    {
        metin[i] = metin[i] - seek;
    }
}

int main()
{
    char cumle[100];
    int seek = 550;
    printf("Lutfen bir cumle giriniz: ");
    scanf("%s", cumle);
    encrypt(cumle, seek);
    printf("%s\n", cumle);
    decrypt(cumle,seek);
    printf("%s", cumle);

    return 0;
}