#include<stdio.h>
int main()
{
    char operator;
    int number_1,number_2,result;
    printf("enter operator(+,-,*,/):");
    scanf("%c",&operator);
    printf("enter 2 numbers:");
    scanf("%d%d",&number_1,&number_2);
    if(operator=='+')
        result=number_1+number_2;
        else
    if(operator=='-')
        result=number_1-number_2;
        else
    if(operator=='*')
        result=number_1*number_2;
        else
    if(operator=='/')
        result=number_1/number_2;
    printf("result:%d",result);
}
