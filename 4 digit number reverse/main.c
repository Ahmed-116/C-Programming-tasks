#include <stdio.h>
int main()
{
   /*int radius;
   printf("Enter radius:");
   scanf("%d",&radius);
   printf("area of circle having radius %d is %f\n",radius,3.14*radius*radius);
   printf("circumference of circle having %d radius is %f",radius,2*3.14*radius);*/
   int number,first_digit,second_digit,third_digit,fourth_digit;
   printf("Enter a numbers:");
   scanf("%d",&number);
   first_digit=number/1000;
   second_digit=(number/100)%10;
   third_digit=(number/10)%10;
   fourth_digit=number%10;
   printf("No in reverse order is :%d%d%d%d",fourth_digit,third_digit,second_digit,first_digit);

}
