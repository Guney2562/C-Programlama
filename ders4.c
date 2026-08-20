#include <stdio.h>
int main(){

    int limit,i,j;
    printf("Karenizin kenar uzunlugu ne olsun?: ");
    scanf("%d",&limit);

   for ( i = 0; i < limit; i++)
   {
    for ( j = 0; j < limit; j++)
    {
        printf("* ");
    }
    printf("\n");
   }
   
   
    return 0;
}