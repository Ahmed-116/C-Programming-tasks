//M.Ahmed
//066
//SP24BSE
/*# include <stdio.h>

int main ()
{

        // program to find whether a number is divisible by 5 or not using switch statement
        int number;
        printf("Enter a number:");
        scanf("%d",&number);

        switch(number%5){
            case 0 :
                printf("%d is divisible by 5\n",number);
                break;

            default:
                printf("%d is not divisible by 5\n",number);

        }*/
    //program to find weather the person is young or not
    #include<stdio.h>
    int main()
    {
         int age;
        printf("Enter age:");
        scanf("%d",&age);
        if(age<30)
            printf("Person is young");
        else
            printf("Person is not young");


    }


