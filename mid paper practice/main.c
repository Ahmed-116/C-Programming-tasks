/*#include <stdio.h>


int main()
{
    printf("INFORMATION\n");
    printf("Student   \t");       printf("Marks\n");
    printf("*Adeel    \t");        printf("*90\n");
     printf("*Ahmed   \t");       printf("*99\n");
}*/
/*#include<stdio.h>
int main()
{
    printf("%d,%f",7/2,7.0/2.0);
}*/
/*
#include<stdio.h>
int main()
{
    char choice='x';
   int month;
   while (choice=='x')
   {
   printf("Enter month(1-12):");
   scanf("\n%d",&month);



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
 printf("\nDo you want to continue:\n");
   choice=getche();
   }

}
*//*
#include<stdio.h>
int main()
{


int ages[5]={5,10,15,20,25};
int i;

    /*ages[0]=ages[3]+ages[4];
    printf("%d=%d+%d",ages[0],ages[3],ages[4]);
    int sum=0;
    for (int i=0;i<=4;i++)
    {
       sum=sum+ages[i];

    }
    //printf("Sum of all ages is :%d",sum);

    float average=sum/5;
    printf("Average of all ages is:%f",average);

}*/
/*#include <stdio.h>

int main()
{
    int ages[3][3];
   /* ages[0][0]=5;
    ages[0][1]=25;
    ages[0][2]=15;
    ages[1][0]=20;
    ages[1][1]=10;
    ages[1][2]=10;
    ages[2][0]=10;
    ages[2][1]=10;
    ages[2][2]=10;
    /*int ages[5]={5,10,15,20,25};*/
/*
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
        printf("Enter element ages[%d][%d]:",i,j);
        scanf("%d",&ages[i][j]);
    }
    }
     for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
       printf("%d ",ages[i][j]);
    }
    printf("\n");
}
}
*/
/*
#include <stdio.h>



int main()
{

printf("Matrics 1:\n");

    int n[2][2]={1,2,3,4};

    for(int i=0;i<=1;i++){
        for(int j=0;j<=1;j++){
            printf("%d ",n[i][j]);
        }
        printf("\n");
    }


printf("Matrics 2:\n");
int m[2][2]={3,4,5,6};
    for(int i=0;i<=1;i++){
        for(int j=0;j<=1;j++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }


    printf("Sum of martrics 1 and martics 2:\n");
  int result[2][2];

    for(int i=0;i<=1;i++){
        for(int j=0;j<=1;j++){
            result[i][j]=n[i][j]+m[i][j];
            printf("%d ",result[i][j]);
        }
        printf("\n");
}
}
*/
/*#include <stdio.h>
void square1();
void main()
{
    sum1();
}
void sum1()
{
    int number1,number2,result;
    printf("Enter a number1:");
    scanf("%d",&number1);
    printf("Enter a number2:");
    scanf("%d",&number2);
    result=number1+number2;
    printf("sum of %d and %d is %d\n",number1,number2,result);
}*/
/*#include<stdio.h>
void sum2(int,int);
void main()
{
    int number1;
    int number2;
    printf("Enter number 1 and 2:",number1,number2);
    scanf("%d%d",&number1,&number2);
    sum2(number1,number2);
}
void sum2(int number1,int number2)
{
    int result;
    result=number1+number2;
    printf("Sum of %d and %d is %d",number1,number2,result);
}*/
/*#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=5;i++)
    {
        if(i%2==0)
            continue;
        printf("%d ",i);
    }
}

*/
/*#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
            printf(" ");

             printf("\n");
    }

}
*/
/*#include <stdio.h>

void main()
{

    char choice='y';
    while(choice=='y'){

    int i,n;
    printf("Enter number to print its table:");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",n,i,n*i);
    }
    printf("do you want to continue:(y)\n");
   choice=getche();


}
}
*/
/*# include <stdio.h>

int main ()
{

        // program to find whether a number is divisible by 5 or not using switch statement
        int number;
        printf("Enter a number:");
        scanf("%d",&number);

        switch(number%5){
            case 0:
case 5:
                printf("%d is divisible by 5\n",number);
                break;



            default:
                printf("%d is not divisible by 5\n",number);

        }


    return 0;
}*/
/*#include<stdio.h>
int main()
{
    //Program 3
    //Write a C program to print all alphabets from a to z. – using while loop
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
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
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n<=100)
    {
        if(n%2==0&&n!=4&&n!=8)
        printf("%d ",n);
        n++;
    }
    }

*/
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

}

*//*
#include <stdio.h>

int main()
{
    int i,j,k,num=1;

    for(int i=1;i<=4;i++)
{
        for (int j=1;j<=4-i;j++)
            printf(" ");

        for (int k=1;k<=i;k++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}*/

/*
#include<stdio.h>
int main()
{
    int i,j,k,num=1;
    for(i=1;i<=5;i++)
    {
    for(j=1;j<=5-i;j++)
        printf(" ");
    for(k=1;k<=i;k++)
         printf("%d ",num++);
         printf("\n");
}
for(i=4;i>=1;i--)
{
    for(j=1;j<=5-i;j++)
        printf(" ");
    for(k=1;k<=i;k++)
         printf("%d ",num++);
         printf("\n");

}

}
*/
/*
# include<stdio.h>
int main (){
    //pyramid
    for(int i=1;i<=7;i++){
        for (int space=1;space<=7-i;space++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
             printf("* "); }
            printf("\n");}
            //reverse pyramid
     for(int i=6;i>=1;i--){
        for(int space=1;space<8-i;space++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("* ");

        }
        printf("\n");
    }

    return 0;
}


*/
#include<stdio.h>
int main()
{
    int d=10;
    do{
        printf("%d",d++);

    }while(d<=12);
}
/*#include<stdio.h>
int main()
{
    int x=5;
    int y=14;
    printf("%d,%d",x/2,y/2);
}
*/
/*#include<stdio.h>
int main()
{
    int x=10;
    for(x=4;x>=1;x=x-5){
        printf("%d",x);}
     printf("%d",x);
}*/
/*#include<stdio.h>
int main()
{
    int x=1,y=1,n;
    for(int i=0;i<5;i++){
            n=x+y;
            x=y;
    y=n;
    printf("%d\n",n);
    }
}
*/
