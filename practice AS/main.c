/*#include <stdio.h>


int main()
{
    char choice='y';
    int i;
    int number;
    printf("Enter number:");
    scanf("%d",&number);
    while(choice=='y')
    {
        for(i=1;i<=5;i++)
{

    printf("%d*%d=%d\n",number,i,number*i);
    }
    printf("Do you want to continue");
    getchar();
    choice=getchar();
}
    return 0;
}*/
#include <stdio.h>

int main()
{
    char choice = 'y';
    int i;
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    while (choice == 'y')
    {
        for (i = 1; i <= 5; i++)
        {
            printf("%d * %d = %d\n", number, i, number * i);
        }

        printf("Do you want to continue (y/n): ");
        choice = getchar(); // Read the choice character
        while (getchar() != '\n'); // Clear the input buffer

        // If you want to echo the character back to the console
        // putchar(choice);

        printf("\n");
    }

    return 0;
}

