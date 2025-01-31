//M.Ahmed
//066
//SP24BSE
# include <stdio.h>

int main ()
{

        // program to find whether a number is divisible by 5 or not using switch statement
        int number;
        printf("Enter a number:");
        scanf("%d",&number);

        switch(number%5){
            case 0 :
            case 5:
                printf("%d is divisible by 5\n",number);
                break;

    

            default:
                printf("%d is not divisible by 5\n",number);

        }


    return 0;
}
