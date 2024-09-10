#include <stdio.h>

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
        return fibonacci(n-1) + fibonacci(n-2);
    
}
int main()
{
    int x;
    printf("Lutfen bir sayi giriniz: ");
    scanf("%d", &x);
    x = fibonacci(x);
    printf("Girdiginiz x sayisinin fibonacci degeri %d dir..", fibonacci(x));

    return 0;
}