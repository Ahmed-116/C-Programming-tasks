#include<stdio.h>
int main()
{
    char alphabet1='A';
    char alphabet2='E';
    int i,j,k;
    for(i=7;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        printf("%c ",alphabet1++);
        alphabet1='A';
            printf("\n");
    }
    for(i=7;i>=1;i--)
    {
        for(j=7;j<=7-i;j++)
            printf(" ");
        for(k=i;k>=1;k--)
            printf("%c",alphabet2--);
        alphabet2='E';
        printf("\n");
    }
}
