/*#include <stdio.h>

int main()
{
    int ages[5];
    ages[0]=5;
    ages[4]=25;
    ages[2]=15;
    ages[3]=20;
    ages[1]=10;
    /*int ages[5]={5,10,15,20,25};*/
    /*int ages[5];
    for(int i=0;i<=4;i++)
    {
        printf("Enter element ages[%d]:",i);
        scanf("%d",&ages[i]);
    }
    for(int i=0;i<=4;i++)
    {
       printf("%d\n",ages[i]);
    }*/
   /* int ages[5]={5,10,15,20,25};
int i;

    ages[0]=ages[3]+ages[4];
    printf("%d=%d+%d",ages[0],ages[3],ages[4]);*/
    /*int sum=0;
    for (int i=0;i<=4;i++)
    {
       sum=sum+ages[i];
    }
    float average=sum/5;
    printf("Average of all ages is:%f",average);

}*/

/*#include<stdio.h>
int main()
{
    //int marks[10]={4,3,2,5,6,8,7,1,2,9};
    int marks[10];
    for(int j=0;j<=9;j++)
    {
        printf("Enter marks[%d]:",j);
        scanf("%d",&marks[j]);
    }
    int sum=0;
        for(int i=0;i<=9;i++)
        {
            sum+=marks[i];
        }
    printf("Sum of marks of all 10 students is:%d",sum);
}*/
//2d array
#include<stdio.h>
int main()
{

    /*int marks[2][3];
    marks[0][0]=10;
    marks[0][1]=20;
    marks[0][2]=30;
    marks[1][0]=40;
    marks[1][1]=50;
    marks[1][2]=60;*/
    int marks[2][3];
    for(int rows=0;rows<=1;rows++){
        for(int col=0;col<=2;col++)
        {
            printf("Enter marks[%d][%d]:",rows,col);
            scanf("%d",&marks[rows][col]);
        }
    }
    for(int i=0;i<=1;i++){
        for(int j=0;j<=2;j++)
        {
            printf("%d  ",marks[i][j]);
        }
        printf("\n");
    }
}
