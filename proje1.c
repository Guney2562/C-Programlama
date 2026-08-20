#include <stdio.h>
int main(){
    int bagaj,el,tutar;

    printf("Bagajiniz kac kilo: ");
    scanf("%d",&bagaj);

    printf("El bagajiniz kac kilo: ");
    scanf("%d",&el);

    if (bagaj>15 && el>8)
    {
        tutar=(bagaj-15)*5+(el-8)*5;
        printf("Odemeniz gereken tutar= %d",tutar);
    }
    else if (el>8)
    {
        tutar=(el-8)*5;
        printf("Odemeniz gereken tutar= %d",tutar);
    }
    else if(bagaj>15)
    {
        tutar=(bagaj-15)*5;
        printf("Odemeniz gereken tutar= %d",tutar);
    }
    else{
        printf("Odemenize gerek yok");
    }

    
    
    
    
    return 0;
}