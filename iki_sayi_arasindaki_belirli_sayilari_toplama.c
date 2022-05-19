#include <stdio.h>
int main()
{
    int baslangic = 400, bitis = 500 , toplam;
   
    for (baslangic ; baslangic <= bitis ; baslangic++)
    {
        if(baslangic % 7 == 0 )
        {
            toplam += baslangic;
        }
        
    }
    printf("Toplam : %d",toplam);
    return 0;
}
