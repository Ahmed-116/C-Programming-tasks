/*#include <stdio.h>
//practice program 1
// Write a C program to print all natural numbers from 1 to n using while loop

int main()
{


   int n;
   printf("Enter value of n:");
   scanf("%d",&n);
   while(n<=10)
   {
       printf("%d ",n);
       n++;
   }
}*/
/*#include<stdio.h>
//program 2
//Write a C program to print all natural numbers in reverse (from n to 1). – using while loop
int main()
{
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    while(n>=1)
    {
        printf("%d\n",n);
        n--;
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    //Program 3
    //Write a C program to print all alphabets from a to z. – using while loop
    char c;
    printf("Enter a character:");
    scanf("%c",&c);
    while(c<='z')
    {
        printf("%c ",c);
        c++;
    }
}*/
/*#include<stdio.h>
int main()
{
//program 4
//even no
    int n=1;
    while(n<=100)
    {
        if(n%2==0)
        printf("%d ",n);
        n++;

    }
}*/
/*#include<stdio.h>
int main()
{
//program 4
//odd no and remove 2 numbers from mid
   int n=100;
   while(n>=1)
   {
       if(n%2==1&&n!=5&&n!=19)
        printf("%d ",n);
       n--;

   }

}*/
/*#include<stdio.h>
int main()
{
    //program 5
    //Program to find sum of natural numbers from 1 to n
    int n,i,j,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter the value of i:");
    scanf("%d",&i);
    for(j=n;j<=i;j++)
    {
        sum+=j;
    }
    printf("Sum of %d and %d=%d",n,i,sum);

}*/

/*#include<stdio.h>
int main()7
{
    //program 6
    //Write a C program to find sum of all even numbers between 1 to n.
    int n,i,j,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter the value of i:");
    scanf("%d",&i);
    for(j=n;j<=i;j++)
    {
        if(j%2==0)
        sum+=j;
    }
    printf("Sum of all even number between %d and %d=%d",n,i,sum);
//similar for odd if(j%2==1)
}*/
/*#include<stdio.h>
int main()
{
    //program 7
    //Write a C program to print multiplication table of any number
    int i,n;
    printf("Enter the number of which you want to find table:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",n,i,n*i);
    }

}*/
/*
#include <stdio.h>

int main()
{
    //program 8
    //find number of digits
    int num;
    int count=0;

    //Input number from user
    printf("Enter any number: ");
    scanf("%d",&num);

    // Run loop till num is greater than 0
    do
    {
        // Increment digit count
        count++;

        // Remove last digit of 'num'
        num =num/10;
    } while(num>0); //it can also while(num!=0)

    printf("Total digits: %d",count);

    return 0;
}
*/
/*#include <stdio.h>

int main()
{
//program 9
    int number,first_digit,last_digit;

    // Input the number
    printf("Enter a number:");
    scanf("%d",&number);

    // Extract the last digit
    last_digit=number%10;

    // Extract the first digit
      while(number>=10){
        number=number/10;
      }
    first_digit=number;

    // Output the first and last digits
    printf("First digit: %d\n",first_digit);
    printf("Last digit: %d\n",last_digit);


}*/

/*

#include <stdio.h>

int main()
{
//program 10

    int number,first_digit,last_digit;

    // Input the number
    printf("Enter a number:");
    scanf("%d",&number);

    // Extract the last digit
    last_digit=number%10;

    // Extract the first digit
      while(number>=10){
        number=number/10;
      }
    first_digit=number;

int sum=first_digit+last_digit;
printf("Sum of %d and %d is = %d",first_digit,last_digit,sum);
}

*/






