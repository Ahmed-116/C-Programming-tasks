#include<stdio.h>
int main()
{
    for(int i=1;i<=3;i++){
        for(int space=1;space<=10;space++)
            printf(" ");
        for(int j=1;j<=i;j++)
            printf("* ");
        printf("\n");}

    for(int i=1;i<=9;i++){
        printf("* ");}
        printf("\n");

     for(int i=1;i<=10;i++){
        printf("* ");}
        printf("\n");

     for(int i=1;i<=9;i++){
        printf("* ");}
        printf("\n");
        for(int i=3;i>=1;i--){
            for(int space=1;space<=10;space++)
                printf(" ");
            for(int k=1;k<=i;k++)
            printf("* ");
            printf("\n");

            }

}
