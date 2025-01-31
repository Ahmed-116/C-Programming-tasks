#include <stdio.h>

void main()
{
    char number;
    char choice='y';
    while(choice=='y'){

    int i,x;
    printf("Enter number to print its table ");
    scanf("%d",&x);

    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",x,i,x*i);
    }
    printf("do you want to continue:(y/n");
    scanf(" %c",&choice);


}
}
