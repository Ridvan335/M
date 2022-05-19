#include <stdio.h>
int main()
{
    int i=1,maks=5,kare,carpim=1,kare_toplami=0;
    printf("Lutfen sifirdan farkli bir deger giriniz : ");
    scanf("%d",maks);
    if(i > 0 && maks > 0)
    {
        for (i ; i<=maks ; i+=1) 
        {
            if(i % 2 == 0)
            {
            kare = i*i;
            kare_toplami += kare;
            }
            else
            {
            carpim *= i;
            }
        }
    }
    else
    {
        printf("Lutfen 0 dan farkli bir deger giriniz.");
        return 0;
    }
    printf("Cift sayilarin kareleri toplami : %d\n", kare_toplami);
    printf("Tek sayilarin carpimi : %d", carpim);
    return 0;
}
