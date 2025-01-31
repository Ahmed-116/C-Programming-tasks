#include <stdio.h>
void square1();
void square2(float);
void Pakistan();
void main()
{
  float number;
  printf("Enter a number:");
  scanf("%f",&number);
  square2(number);
  Pakistan();
  square1();
}
void square2(float number)
{
    float result;
    result=number*number;
    printf("Square of %f is %f\n",number,result);
}
void square1()
{
    float number,result;
  printf("Enter a number:");
  scanf("%f",&number);
  result=number*number*number;
    printf("Cube of %f is %f\n",number,result);

}
void Pakistan()
{
    float number;
     printf("Enter a number:");
     scanf("%f",&number);
     if(number<=5)
    printf("Pakitan\n");
    else
        printf("India\n");
}
