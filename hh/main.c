#include <stdio.h>


int main()
{
    char choice='y';
    int i;
    int number;

    while(choice=='y')
    {
        printf("Enter number:");
    scanf("%d",&number);
        for(i=1;i<=5;i++)
{

    printf("%d*%d=%d\n",number,i,number*i);
    }
    printf("Do you want to continue(y):\n");

    choice=getche();
}
    return 0;
}
