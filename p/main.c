#include <stdio.h>
int sum(int,int);

void main()
{
    int result,number1,number2;
    result=sum(number1,number2);
    printf("%d",result);


}
int sum(int number1,int number2)
{
  int number,result;
   printf("Enter a number1:");
    scanf("%d",&number1);
    printf("Enter a number2:");
    scanf("%d",&number2);
    printf("sum of %d and %d is \n",number1,number2,result=number1+number2);

    return result;

}
