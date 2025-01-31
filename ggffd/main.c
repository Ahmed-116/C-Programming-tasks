
# include <stdio.h>
int main( )
{
   int number,digit_1,digit_2,digit_3,digit_4;
   printf("Enter four digit number:");
   scanf("%d",&number);
   digit_1=number/1000;
   digit_2=(number/100)%10;
   digit_3=(number/10)%10;
   digit_4=number%10;
   printf("%d%d%d%d",digit_4,digit_3,digit_2,digit_1);


}
