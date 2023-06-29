#include "stdio.h"
#include "conio.h"
#define line printf("----------------------------------\n");
void main(){
    int sum,num1,num2;
    line
    printf("Sum Number\n");
    line
    do
    {
    printf("Input First Number : ");
    scanf("%d",&num1);
    printf("Input Second Number : ");
    scanf("%d",&num2);
    sum = num1 + num2;
    printf("Sum of Number : %d\n",sum);
    line
    } while (sum <= 500);
    
}