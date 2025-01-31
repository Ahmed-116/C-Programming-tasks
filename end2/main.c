//MUHAMMAD AHMED
//SP24-BSE-066
//SECTION(B)

#include <stdio.h>

int main()
{
    int program;
    printf("Which program do you want to run:(1/2)");
    scanf("%d",&program);
    if(program==1)
    {



    //Program no 1
    int n;
     int largestprime_n;
     int totalprime_n;

    printf("Enter a number:");
    scanf("%d",&n);
    if(n<0)
        printf("negative number type another number");

    if(n==0)
        return 0;
     if(n>0)
    for(n=2;n<=n/2;n++){
        int i=n;
        if(i%n==0)
            printf("Not prime number");


    }
    printf("prime number");



    }













else



{


    //program no 2



    int  marks1,marks2,result;
    printf("Enter mid-term marks(maximum 25):");
    scanf("%d",&marks1);
    printf("Enter final-term marks(maximum 75):");
    scanf("%d",&marks2);
    if(marks1>25||marks2>75){
    printf("Invalid no.");
    return 0;}




    result=marks1+marks2;
    printf("Total marks:%d\n",result);
    if(result>=85)
        printf("Grade:A+");

        if(result<85&&result>=80)
         printf("Grade:A-");


       else if(result<80&&result>=75)
         printf("Grade:B+");

        else if(result<75&&result>=70)
         printf("Grade:B-");

       else if(result<70&&result>=65)
         printf("Grade:C+");

        else if(result<65&&result>=60)
         printf("Grade:C-");

       else if(result<60&&result>=50)
         printf("Grade:D");

       else if(result<50)
         printf("Grade:F");









}
















}
