#include <stdio.h>
int main(){
    int sayi,faktoriyel;
    printf("Girmek istediginiz sayiyi giriniz: ");
    scanf("%d",&sayi);
    faktoriyel=1;

    while (sayi>1)
    {
        faktoriyel=sayi*faktoriyel;
        sayi--;
    }
    printf("Faktoriyeli: %d\n",faktoriyel);

    return 0;
}