#include "stdio.h"

void main(){
    int i;
    for (i = 1; i <= 5; i++) // i = ค่าตัวแปร; i = เงื่อนไข ; i= นับจำนวน 
    {
        if (i%2 == 0)
        {
            continue;
        }
        
        printf("%d)IoT\n",i);
    }
    
}
