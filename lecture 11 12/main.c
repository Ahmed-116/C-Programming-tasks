/*#include <stdio.h>

void pass_by_value(float,int,char);
void main()
{
    pass_by_value(82.4,18,'A');
}
 void pass_by_value(float marks,int age,char grade)
 {
     printf("Marks=%f\n",marks);
     printf("Age=%d\n",age);
     printf("Grade=%c",grade);
 }
*/
#include<stdio.h>
float cube3();
void main()
{
    float result;
    result=cube3();
    printf("%f",result);
}
float cube3()
{
    float number,result;
    printf("Enter a number:");
    scanf("%f",&number);
    printf("cube of %f is ",number,result,result=number*number*number);
    return result;
}
