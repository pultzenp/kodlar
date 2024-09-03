#include <stdio.h>
 
main()
{
    int sayi1,sayi2;
    char x;
    
    printf("1.Sayiyi giriniz:");
    scanf("%d",&sayi1);
    printf("2.Sayiyi giriniz: ");
    scanf("%d",&sayi2);

    printf("Lutfen yapacaginiz islemin sembolunu giriniz: +, -, /, * ");
    scanf(" %c",&x);


      switch(x){
         case '+':
             printf("Toplama isleminin sonucu : %d",sayi1 + sayi2);
             break;
         case '-' :
             printf("Cikarma isleminin sonucu : %d",sayi1 - sayi2);
             break;
         case '/' :
             printf("Bolme isleminin sonucu : %f", (float) sayi1 / (float) sayi2);
             break;
         case '*' :
             printf("Carpma isleminin sonucu : %d", sayi1 * sayi2);
             break;
         return 0;
    }
}




    
    
    
    

