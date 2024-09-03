#include <stdio.h>

    int sum(int a, int b)
    {
        return a+b;
        
    }


int main()
{
    int a;
        int b;
        printf("Lutfen sayi giriniz: ");
        scanf("%d", &a);
        printf("Lutfen bir sayi daha giriniz: ");
        scanf("%d", &b);

        int total = sum(a,b);
        printf("%d", total);
        return 0;


}