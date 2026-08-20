#include <stdio.h>
int main(){
    float sinav1,sinav2,sinav3,proje,ort;

    printf("Birinci sinav notunuzu giriniz: ");
    scanf("%f",&sinav1);

    printf("Ikinci sinav notunuzu giriniz: ");
    scanf("%f",&sinav2);

    printf("Ucuncu sinav notunuzu giriniz: ");
    scanf("%f",&sinav3);

    printf("Proje notunuzu giriniz: ");
    scanf("%f",&proje);

    ort=(sinav1+sinav2+sinav3+proje)/4;
    printf("%f",ort);

    return 0;
}