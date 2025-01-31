/*#include<stdio.h>
int main()
{
    char choice='y';
    int i,n;
    while(choice='y')
   {

    printf("Enter i:");
    scanf("%d",&i);
    printf("Enter n:");
    scanf("%d",&n);
    while(n<=10)
    {
        printf("%d*%d=%d\n",n,i,n*i);
        n++;
    }
   }
    printf("Do you want to continue:\n");
    choice=getche();
    getchar;

}*/
/*#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=10;j++)
            printf("%d",j);
        printf("\n");
    }
}

*/
/*#include <stdio.h>

int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        if(i%2==0)
            printf("%d(Even no.) ",i);
        else
            printf("%d(Odd no.) ",i);
    }
}*/
#include <stdio.h>

int main(){
    int year;
    printf("enter year:");
    scanf("%d",&year);

    if(year%400==0||!year%100==0||year%4==0){
        printf("Leap year");}
        else


           printf("not leap year");}





