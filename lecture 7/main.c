#include <stdio.h>
#include <conio.h>

int main()
{
    char choice='y';
    int number;
    while(choice=='y')
    {
        printf("Enter a number:");
        scanf("%d",&number);
        printf("Square of %d is %d\n",number,number*number);
        printf("Do you want to continue:\n");
        choice=getche();
    }



    return 0;
}
