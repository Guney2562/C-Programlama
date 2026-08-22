#include <stdio.h>
int main(){
    int i=0;
    
    while (i<100)
    {
        if (i%2==0)
        {
            printf("Cift sayilar: %d\n",i);
        }
        else
        {
            printf("Tek sayilar: %d\n",i);
        }
        i++;
    }
    
    return 0;
}