#include <stdio.h>
int strlen1(const char *yazi)
{

    int toplam = 0;
    for (int i = 0; 1; i++)
    {
        if (yazi[i] == '\0')
        {
            break;
        }
        toplam++;

        
    }
        return toplam;
    
}

int main()
{
    char yazi[100];
    printf("Lutfen bir kelime veya cumle giriniz: ");
    scanf("%s", &yazi);
    int len = strlen1(yazi);
    printf("%d", len);
    int i;
    for (i = 0; i < len / 2; i++)
    {
        int y = len - i - 1;
        if (yazi[i] != yazi[y])
        {
            printf("Girdiginiz cumle veya kelime palindrom degildir..");
            return 0;
        }
    }
    printf("Girdiginiz cumle veya kelime palindromdur..");
}
