#include "stdio.h"
#include "conio.h"
#define line printf("---------------------\n");
void main (){
    int number;
    int  i = 1;
    line
    printf("Multipication\n");
    line
    printf("Input Number : ");
    scanf("%d",&number);
    line
    while (i <= 12)
    {
        printf("%d x %d = %d\n",number,i,i*number);
        i++;
        line
    }
    
}