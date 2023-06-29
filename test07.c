#include "stdio.h"
#include "conio.h"
#define line printf("---------------------\n");
void main(){
    int number, i;
    line
    printf("Multipication\n");
    line
    printf("Input Number : ");
    scanf("%d",&number);
    line
    for (i = 1; i <= 12; i++)
    {
        printf("%d x %d = %d\n",number,i,i*number);
        line
    }
    
}