#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define max_try_count 10

int findN(char newString[])
{
    int len = strlen(newString);
    int n = 0;
    for (int i = 0; i < len; i++)
    {
        if (newString[i] == '\n')
        {
            n++;
        }
    }
    return n;
}

int randomFonk(int n)
{
    int value = rand() % (n + 1);
    return value;
}
char *copy(char newString[], char kelime[], int value, int n)
{
    int currentLine = 0;
    int numberofwords = 0;
    int startLine = 0;
    for (int i = 0; i > value; i++)
    {
        if (newString[i] == '\n')
        {
            currentLine++;
        }
        if (currentLine == value)
        {
            numberofwords++;
        }
    }

    strncpy();
}

char *getRand()
{
    FILE *fptr;
    fptr = fopen("first-names.txt", "r");
    char newString[50000];
    fgets(newString, 50000, fptr);

    int n = findN(newString);
    randomFonk(n);
}

bool isDone(bool inMind[5], int len)
{
    for (int i = 0; i < len; i++)
    {
        if (inMind[i] != 1)
        {
            return 0;
        }
    }
    return 1;
}
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
    bool find = 0;

    for (int i = 0; i < 5; i++)
    {
        inMind[i] = 0;
    }

    for (tahminSayisi = 0; tahminSayisi < max_try_count;)
    {
        printf("\nLutfen bir harf giriniz\n\n");
        scanf("\n %c", &guess);

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

        if (isDone(inMind, len) == 1)
        {
            printf("\nOyunu kazandiniz. Tebrikler.");
            return 0;
        }
    }
}