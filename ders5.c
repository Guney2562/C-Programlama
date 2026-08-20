#include <stdio.h>
int main(){
    int i,integer,result;
    printf("Bir sayi giriniz: ");
    scanf("%d",&integer);
    result=1;

    for ( i = 1; i <= integer; i++)
    {
        result=result*i;
        printf("%d\n",result);
    }
    return 0;
}