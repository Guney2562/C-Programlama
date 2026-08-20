#include <stdio.h>
int main(){
    char isim[200];
    float x,tutar1,tutar2;
    int i;

    printf("Adiniz nedir: ");
    scanf("%s",isim);
    printf("Hos geldin %s!\n", isim);

    printf("Kac tane urun alacaksiniz?: ");
    scanf("%f",&x);

    tutar2=0;

    for ( i = 1; i <= x; i++)
    {
        printf("%d.",i);

        printf("Aldiginiz urun kac lira: ");
        scanf("%f",&tutar1);

        tutar2=tutar1+tutar2;

    }
    printf("Odemeniz gereken tutar: %f\n",tutar2);

    float verilenpara;  
    int paraustu, yuzluk, ellilik, yirmilik, onluk, beslik, birlik; 

    printf("Odeyeceginiz miktari giriniz: ");
    scanf("%f", &verilenpara);

    if (verilenpara > tutar2)
    {
        paraustu = (int)(verilenpara - tutar2);
        yuzluk = paraustu / 100;
        paraustu = paraustu % 100;
        ellilik = paraustu / 50;
        paraustu = paraustu % 50;
        yirmilik = paraustu / 20;
        paraustu = paraustu % 20;
        onluk = paraustu / 10;
        paraustu = paraustu % 10;
        beslik = paraustu / 5;
        paraustu = paraustu % 5;
        birlik = paraustu;
        printf("\nPara ustunuz: %.2f TL\n", verilenpara - tutar2);
        printf("100'luk: %d\n", yuzluk);
        printf("50'lik: %d\n", ellilik);
        printf("20'lik: %d\n", yirmilik);
        printf("10'luk: %d\n", onluk);
        printf("5'lik: %d\n", beslik);
        printf("1'lik: %d\n", birlik);
    }
    else if (verilenpara==tutar2)
    {
        printf("Para ustunuz yok,paraniz tamdir");
    }
    else{
        printf("Eksik para verdiniz,lütfen tamamlayip yeniden veriniz");
    }

    return 0;
}