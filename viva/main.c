//Name:M.AHMED
//ROLL NO:066
//Section:SP24BSE(B)


//  PROBLEM 1
/*
#include <stdio.h>

int main()
 {
    int series;

    printf("Enter the number of series: ");
    scanf("%d",&series);
    int number=9,sum;

    for (int i=1;i<=series;i++)
        {
        sum+=number;
        printf("%d ",number);

        number=number*10+9;
    }

    printf("\nSum of the series: %d\n", sum);
}

*/


//PROBLEM2


#include<stdio.h>
void square();
int main()
{
    square();
}
void square()
{
    int i,j;
    for(i=1;i<=4;i++){
        for(j=1;j<=4;j++)
            if(i==1||i==4||j==1||j==4)
            printf("* ");
        else
            printf("  ");
            printf("\n");
    }
}


