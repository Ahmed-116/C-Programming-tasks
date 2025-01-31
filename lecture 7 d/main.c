#include <stdio.h>

int main()
{
    char choice='y';
    int i;
    int n;
    while(choice=='y')
    {
        printf("Enter a number:");
    scanf("%d",&n);

    for(i=1;i<=9;i++)
    {

        printf("%d*%d=%d\n",i,n,i*n);
    }
    printf("do you want to do again");
    choice=getche();
    }

    return 0;
}
