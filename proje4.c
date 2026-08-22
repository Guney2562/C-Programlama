#include <stdio.h>
int main(){
    int deneme;
    int sifre=1234;

    printf("Sifre giriniz: ");
    scanf("%d",&deneme);

    while (deneme != sifre)
    {
        printf("Sifre yanlis ");
        printf("Tekrar deneyiniz: ");
        scanf("%d",&deneme);
    }
    printf("Sifre dogru: %d",deneme);
    return 0;
}