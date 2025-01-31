#include<stdio.h>
int square1();
int square2();
int square4();
int square3();
int main()
{
    square3();
    square4();
    square1();



}
   int square1()
{
    int i,j;
    for(i=1;i<=4;i++){
        for(j=1;j<=4;j++)
            if(i==1||i==4||j==1||j==4)
            printf("* ");
        else
            printf("  ");
            printf("\n");}


}
int square3()
{
   printf("Sami ----Ayesha javd\n");
}
int square4()
{
    printf("wajahat single\n");
}
