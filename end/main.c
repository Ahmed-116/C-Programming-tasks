#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*printf("Triangle\n");
    printf("    *    \n");
    printf("  *   *  \n");
    printf(" *     *  \n");
    printf("*********  \n");*/
    /*printf("Square\n");
    printf("*****\n");
    printf("*   *\n");
    printf("*****\n");*/
    /*printf("_________________\n");
    printf("Demographic info:\n");
    printf("_________________\n");
    printf("Name      \tM.Ahmed\n");
    printf("Age       \t18\n");
    printf("Grades    \tA\n");
    printf("Percentage\t86.9\n");*/
    //printf("%d+%d+%d=%d",5,8,9,5+8+9);
    //printf("%f+%f-%d=%f",3.5,2.5,3,3.5+2.5-3);
    //printf("%d*%d*%d=%d",5,2,3,5*2*3);
    //printf("%d%%%d=%d",13,7,13%7);
    //printf("%d%%%d=%d",7,13,7%13);
    //int number_1,number_2;
    //printf("Enter first no:");
    //scanf("%d",&number_1);
    //printf("Enter second no:");
    //scanf("%d",&number_2);
    //printf("%d+%d=%d",number_1,number_2,number_1+number_2);
    //printf("%d-%d=%d",number_1,number_2,number_1-number_2);
    //printf("%d%%%d=%d",number_1,number_2,number_1%number_2);
    //printf("%d*%d=%d",number_1,number_2,number_1*number_2);
    //printf("%d/%d=%d",number_1,number_2,number_1/number_2);
    /*int number;
    //printf("enter n umber you want to find square off:");
    //scanf("%d",&number);
    //printf("square=%d",number*number);
    //printf("enter number you want to find cube off:");
    scanf("%d",&number);
    printf("cube=%d",number*number*number);*/
    /*float diameter;
    printf("enter diameter:");
    scanf("%f",&diameter);
    printf("Radius=%f",diameter/2);*/
    int number,first_digit,second_digit;
    printf("Enter two digit number:");
    scanf("%d",&number);
    first_digit=number/10;
    second_digit=number%10;
    printf("no in reverse order:%d%d",second_digit,first_digit);






    return 0;
}

