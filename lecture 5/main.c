#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number_1=10000,number_2=1000,number_3=1000,number_4=1001,number_5=1000;
    if(number_1>number_2&&number_1>number_3&&number_1>number_4&&number_5)
        printf("number 1 is largest");
        else
    if(number_2>number_1&&number_2>number_3&&number_2>number_4&&number_2>number_5)
        printf("number 2 is largest");
        else
    if(number_3>number_1&&number_3>number_2&&number_3>number_4&&number_3>number_5)
        printf("number 3 is largest");
        else
    if(number_4>number_1&&number_4>number_2&&number_4>number_3&&number_4>number_5)
        printf("number 4 is largest");
        else
    if(number_5>number_1&&number_5>number_2&&number_5>number_3&&number_5>number_4)
        printf("number 5 is largest");
    return 0;
}
