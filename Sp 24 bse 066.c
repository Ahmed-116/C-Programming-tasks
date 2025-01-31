# include<stdio.h>
int main ()
{


    for(int i=1;i<=6;i++){
        for (int space=6-i;space>0;space--)
        {

            printf(" ");
        }
        for(int k=1;k<=i;k++){
             printf("* "); }
            printf("\n");}
            }
