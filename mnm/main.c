




#include<stdio.h>
int main()
{
    double number;
    while(1)
    {
        printf("Enter a number to calculate square root(-1 to terminate):");
        scanf("%lf",&number);
        if(number==-1)
        {
            break;
        }
        if(number<0)
        {
            printf("Enter a positive number");
            continue;
        }
        double guess=number/2;
        for(int i=1;i<=10;i++)
        {
            guess=(guess+number/guess)/2;
        }
     printf("square root of %.2lf is %.6lf\n",number,guess);
    }
