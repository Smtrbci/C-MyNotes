#include <stdio.h>
#include <stdlib.h>

int main()
/*
{
   int yas;

   printf("Lutfen yasiniz giriniz\n");
   scanf("%d",&yas);

   if((yas>30) && (yas<60))
   {
        printf("BRAVO");
   }

   return 0;
}
*/
{
   int yas;
   int ugurlu_sayi;

   printf("Lutfen yasiniz giriniz\n");
   scanf("%d",&yas);

   printf("Lutfen ugurlu sayinizi giriniz\n");
   scanf("%d",&ugurlu_sayi);

   if(((yas>20) && (yas<60)) || (ugurlu_sayi==12))
   {
        printf("BRAVO");
   }

   return 0;
}
