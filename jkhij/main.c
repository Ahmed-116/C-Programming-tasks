/*#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=6;i++)

        for(j=1;j<=i;j++)
            printf("*");

    printf("\n");
}*/
diamond
# include<stdio.h>
int main (){
    //pyramid
    for(int i=1;i<=6;i++){
        for (int space=6-i;space>0;space--){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
             printf("* "); }
            printf("\n");}
            //reverse pyramid
     for(int i=5;i>=1;i--){
        for(int space=6-i;space>0;space--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("* ");

        }


        printf("\n");
    }





    return 0;
}
