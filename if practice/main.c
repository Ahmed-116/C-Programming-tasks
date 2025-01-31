/*#include <stdio.h>


int main()
{
    //Practice program 1
    //Find largest number.
    int n1,n2,n3;
    printf("Enter number1:");
    scanf("%d",&n1);
    printf("Enter number2:");
    scanf("%d",&n2);
    printf("Enter number3:");
    scanf("%d",&n3);
    if(n1>n2&&n1>n3)
        printf("number1 is larger");
    else if(n2>n1&&n2>n3)
        printf("number2 is larger");
        else if(n3>n1&&n3>n2)
        printf("number3 is larger");

}*/
/*#include<stdio.h>
int main()
{
    //practice program 2
    //+ve,-ve and 0
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n>0)
        printf("Number is positive(+)");
    if(n<0)
        printf("Number is negative(-)");
    if(n==0)
        printf("Number is zero");

}*/
/*#include<stdio.h>
int main()
{
    //Practice Program 3
    //Program to check whether a number is divisible by 5 and 11 or not
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n%5==0||n%5==5)
        printf("Number is divisible by 5");
    else
        printf("Number is not divisible by 5");
        printf("\nEnter a number:");
        scanf("%d",&n);
    if(n%11==0)
        printf("Number is divisible by 11");
    else
        printf("Number is not divisible by 11");

}*/
/*#include<stdio.h>
int main()
{
 //Practice program 4
 //Program to check alphabets
 char character;
 printf("Enter a character:");
 scanf("%c",&character);
 if((character>='a'&&character<='z')||(character>='A'&&character<='Z'))
    printf("This character is an Alphabet");
    else
        printf("This character is not an Alphabet");
}*/
/*#include<stdio.h>
int main()
{
 //Practice program 5
 //program to check whether a character is uppercase or lowercase alphabet
 char ch;
 printf("Enter an alphabet:");
 scanf("%c",&ch);
 if(ch>='a'&&ch<='z')
    printf("Alphhabet is Lower case");
 else if(ch>='A'&&ch<='Z')
 printf("Alphabet is Upper case");
 else
    printf("invalid input");
}*/
/*#include<stdio.h>
int main()
{
 //Practice program 5
 //
  int month;


    printf("Enter month number (1-12): ");
    scanf("%d", &month);


    if(month == 1)
    {
        printf("31 days");
    }
    else if(month == 2)
    {
        printf("28 or 29 days");
    }
    else if(month == 3)
    {
        printf("31 days");
    }
    else if(month == 4)
    {
        printf("30 days");
    }
    else if(month == 5)
    {
        printf("31 days");
    }
    else if(month == 6)
    {
        printf("30 days");
    }
    else if(month == 7)
    {
        printf("31 days");
    }
    else if(month == 8)
    {
        printf("31 days");
    }
    else if(month == 9)
    {
        printf("30 days");
    }
    else if(month == 10)
    {
        printf("31 days");
    }
    else if(month == 11)
    {
        printf("30 days");
    }
    else if(month == 12)
    {
        printf("31 days");
    }
    else
    {
        printf("Invalid input! Please enter month number between (1-12).");
    }
}
*/
    //another logic
  /*  #include<stdio.h>
    int main()
    {
        int month;
        printf("Enter month number(1-12)");
        scanf("%d",&month);
        if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
            printf("31 days");
        else if(month==4||month==6||month==9||month==11)
            printf("30 days");
        else if(month==2)
            printf("28 or 29 days");



    }*/





/*
#include<stdio.h>

int main()
{
    //Practice program 6
    //Write a C program to count total number of notes in given amount
    int amount;
    int note500, note100, note50, note20, note10, note5, note2, note1;

    note500 = note100 = note50 = note20 = note10 = note5 = note2 = note1 = 0;



    printf("Enter amount: ");
    scanf("%d", &amount);


    if(amount >= 500)
    {
        note500 = amount/500;
        amount -= note500 * 500;
    }
    if(amount >= 100)
    {
        note100 = amount/100;
        amount -= note100 * 100;
    }
    if(amount >= 50)
    {
        note50 = amount/50;
        amount -= note50 * 50;
    }
    if(amount >= 20)
    {
        note20 = amount/20;
        amount -= note20 * 20;
    }
    if(amount >= 10)
    {
        note10 = amount/10;
        amount -= note10 * 10;
    }
    if(amount >= 5)
    {
        note5 = amount/5;
        amount -= note5 * 5;
    }
    if(amount >= 2)
    {
        note2 = amount /2;
        amount -= note2 * 2;
    }
    if(amount >= 1)
    {
        note1 = amount;
    }


    printf("Total number of notes = \n");
    printf("500 = %d\n", note500);
    printf("100 = %d\n", note100);
    printf("50 = %d\n", note50);
    printf("20 = %d\n", note20);
    printf("10 = %d\n", note10);
    printf("5 = %d\n", note5);
    printf("2 = %d\n", note2);
    printf("1 = %d\n", note1);

    return 0;
}*/

/*#include<stdio.h>

int main()
{
    //practice program 7
    //Write a C program to input all angles of a triangle and check whether triangle is valid or not
    int angle1,angle2,angle3,sum;
    printf("Enter three angles of triangle: \n");
    scanf("%d%d%d",&angle1,&angle2,&angle3);
    sum=angle1+angle2+angle3;
    if(sum==180&&angle1>0&&angle2>0&&angle3>0)
        {
            printf("Triangle is valid");
        }
    else
    {


    printf("Triangle is not valid");
    }

}*/
/*#include<stdio.h>
int main()
{
    //practice program 8
    //Write a C program to input all sides of a triangle and check whether triangle is valid or not
    int side1,side2,side3;
    printf("Enter three sides of triangle:\n");
    scanf("%d%d%d",&side1,&side2,&side3);
    if((side1+side2>=side3)&&(side1+side3>=side2)&&(side2+side3>=side1))
        printf("Triangle is valid");
    else
    {
        printf("Triangle is not valid");
    }
}*/
/*#include<stdio.h>
int main()
{
    //practice program 9
    //Program to check equilateral, scalene or isosceles triangle.
    int side1,side2,side3;
    printf("Enter three sides of triangle:\n");
    scanf("%d%d%d",&side1,&side2,&side3);
    if(side1==side2&&side2==side3&&side1==side3)
        printf("Triangle is Equilateral");
    else if(side1==side2||side1==side3||side2==side3)
        printf("Triangle is Isosceles");
    else
    {
        printf("Triangle is scalene");
    }
}*/

/*
#include <stdio.h>
int main()
{
    //program 10
    //C program to calculate profit or loss
    //cp=cost price sp=sale price amt=amount
    int cp,sp,amt;


    printf("Enter cost price: ");
    scanf("%d",&cp);
    printf("Enter selling price: ");
    scanf("%d",&sp);

    if(sp>cp)
    {

        amt=sp-cp;
        printf("Profit=%d",amt);
    }
    else if(cp>sp)
    {

        amt=cp-sp;
        printf("Loss=%d",amt);
    }
    else
    {

        printf("No Profit No Loss");
    }


}*/
