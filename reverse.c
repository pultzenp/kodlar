#include <stdio.h>
#include <string.h>
int reverse(char *yazi)
{


    int len = strlen(yazi);
    int i;
    for (i = 0; i < len / 2; i++)
    {
        char j = yazi[i];
        int y = len - i - 1;
        yazi[i]= yazi[y];
        yazi[y] = j;

        
           
           
        
    }
    



}


int main()
{
    char yazi[100];
    printf("Lutfen bir kelime veya cumle giriniz: ");
    scanf("%s", &yazi);
    reverse(yazi);
    printf("%s", yazi);
    
}