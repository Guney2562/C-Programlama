#include <stdio.h>
int main(){
    int x;

    printf("Haftanin hangi gunundesiniz:");
    scanf("%d",&x);

    switch (x)
    {
    case 1:printf("Pazartesindesiniz");
    break;
    case 2:printf("Salidasiniz");
    break;
    case 3:printf("Carsambasiniz");
    break;
    case 4:printf("Persembesiniz");
    break;
    case 5:printf("Cumadasiniz");
    break;
    case 6:printf("Cumartesidesiniz");
    break;
    case 7:printf("Pazardasiniz");
    break;
    default:printf("Hatali");
    break;

    }
    return 0;
}