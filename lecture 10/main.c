/*#include <stdio.h>
void square1();
void main()
{
    square1();
}
void square1()
{
    float number,result;
    printf("Enter a number:");
    scanf("%f",&number);
    result=number*number;
    printf("Square of %f is %f\n",number,result);
}
*/
#include<stdio.h>
void cube();
void square(float);
void main()
{
    float number=1;
    while(number<=10)
    {
        printf("%f\n",number);
        number++;
    }


    square(number);
    cube();
}
void square(float number)
{
    float result;
    result=number*number;
    printf("Square of %f is %f\n",number,result);
}
void cube()
{
    float number,result;
    printf("Enter a number:");
    scanf("%f",&number);
    result=number*number*number;
    printf("Cube of %f is %f\n",number,result);
}

