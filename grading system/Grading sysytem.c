#include <stdio.h>

int main()
{
    int marks;
    printf("Enter marks:");
    scanf("%d",&marks);
    if(marks>=80&&marks<=100)
        printf("grade=A");
else if(marks>=70&&marks<=79)
        printf("grade=B");
else if(marks>=60&&marks<=69)
        printf("grade=C");
else if(marks>=50&&marks<=59)
        printf("grade=D");
else if(marks>=0&&marks<=50)
     printf("grade=F");




    return 0;
}
