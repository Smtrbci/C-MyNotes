#include <stdio.h>
#include <stdlib.h>

int main()
{
    // IC ICE IF KULLANIMI
    int a,b;
    printf("Lutfen ilk sayiyi girirniz\n");
    scanf("%d,&a");
    printf("Lutfen ikinci sayiyi girirniz\n");
    scanf("%d,&b");
    if(a%2==1)
    {
        if(b%2==1)
        {
            printf("Iki sayim da tektir");
        }
        else
        {
            printf("ilk sayim tek ikinci sayim cifttir\n");
        }
    }
    else
    {
        if(b%2==1)
        {
            printf("Iki sayim da tektir");
        }
        else
        {
            printf("iki sayim cifttir");
        }
    }
    return 0;
}
