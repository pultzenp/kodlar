#include <stdio.h>
#include <string.h>

int main()
{
    char yazi[100];
    printf("Lutfen bir kelime veya cumle giriniz: ");
    scanf("%s", &yazi);
    int len = strlen(yazi);
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
