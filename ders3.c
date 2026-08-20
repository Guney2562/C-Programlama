#include <stdio.h>
int main(){
    char isim[100]; char yas[20]; char soyad [100]; char sehir[200]; char meslek[200];

    printf("Isminizi giriniz: ");
    scanf("%s",isim);

    printf("Soyadinizi giriniz: ");
    scanf("%s",soyad);

    printf("Yasinizi giriniz: ");
    scanf("%s",yas);

    printf("Yasadiginiz sehiri giriniz: ");
    scanf("%s",sehir);

    printf("Mesleginizi giriniz: ");
    scanf("%s",meslek);
    printf("\n\n");

    printf("****Kisi Bilgisi****\n\n");
    printf("Isim: %s\nSoyad: %s\nYasiniz: %s\nSehir: %s\nMesleginiz: %s",isim,soyad,yas,sehir,meslek);
    printf("\n\n");

    return 0;
}