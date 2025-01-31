/*#include <stdio.h>


int main()
{
    //program 1
    //C program to print day of week using switch case
    char choice='y';
    int day;
    while(choice='y')
    {


    printf( "Enter day of week(1-7):" );
    scanf("%d",&day);
    switch(day)
    {
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("Thursday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("Saturday");
        break;
        case 7:
        printf("Sunday");
        break;
        default:
        printf("Invalid Input");

    }
    printf("\nDo you want to continue:\n");
    getchar();
      choice=getche();
    }
}*/
/*#include<stdio.h>
int main()
{
    //Program 2
    //Write a C program print total number of days in a month using switch case
    int month;
    printf("Enter month number(1-12):");
    scanf("%d",&month);
    switch(month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31 days");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("30 days");
        break;
    case 2:
        printf("28/29 days");
        break;
    default:
        printf("Invalid input");

    }
}
*/
/*#include<stdio.h>
int main()
{
    //Program 2
    //Logic to find maximum using switch...case statement
    int n1,n2;
    printf("Enter two numbers:\n");
    scanf("%d%d",&n1,&n2);
    switch(n1>n2){
    case 0:	
        printf("%d is maximum",n2);
        break;
    case 1:
        printf("%d is maximum",n1);
        break;
    default:
    printf("invalid input");
    }

}
*/
/*#include<stdio.h>
int main()
{
    //program 3
    //Program to check even or odd using switch...case
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    switch(n%2)
    {
   case 0:
    printf("Even number");
    break;
   case 1:
    printf("Odd number");
    break;
    default:
        printf("Invalid input");



    }

}*/
/*#include<stdio.h>
int main()
{
    //program 4
    //+ve,-ve or 0
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    switch(n>0)
    {
    case 1:
        printf("number is positive");
        break;
    case 0:
        switch(n<0){
    case 1:
        printf("number is negative");
        break;
    case 0:
        printf("number is zero");
        }
    }
}
*/


#include<stdio.h>
int main()
{
    //program 5
    //Simple calculator
    char choice='y';
    char operator;
    int n1,n2,result=0;
    while (choice=='y'){
    printf("________________________________\n");
    printf("Welcome to a Simple Calculator:\n");
    printf("________________________________\n");
    printf("Enter operator(+,-,*,/):\n");
    scanf("\n%c",&operator);
    printf("Enter two numbers:\n");
    scanf("%d%d",&n1,&n2);
    switch(operator)
    {
    case '+':
        result=n1+n2;
        break;
    case '-':
        result=n1-n2;
        break;
    case '*':
        result=n1*n2;
        break;
    case '/':
        result=n1/n2;
        break;
    default:
        printf("Invalid input!!");
        return 0;



    }
    printf("Result= %d\n",result);
    printf("Do you want to continue:\n");
    choice=getche();
    }
    return 0;
}
