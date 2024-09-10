#include <stdio.h>
#include <string.h>

void encrypt(char metin[]);
{

    int len = strlen(metin);

    int asciiValue = (int)metin[];

    for (int i = 0; i < len; i++)
    {
        asciiValue[i] = asciiValue[i] + 3;
    }
}

void decrypt(char ** metin[]);
{
    int len = strlen(metin);

    int asciiValue = (int)metin[];

    for (int i = 0; i < len; i++)
    {
        asciiValue[i] = asciiValue[i] - 3;
    }


}

int main()
{
    char cumle;
    printf("Lutfen bir cumle giriniz: ");
    scanf("%s", cumle);
    encrypt(cumle);
    printf("%s", cumle);
    decrypt(cumle);
    printf("%s", cumle);



    return 0;




}