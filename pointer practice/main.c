/*
#include <stdio.h>


int main()
{
    int age,*ptr;
    age=25;
    ptr=&age;
    printf("%d\n",ptr);
    printf("%u\n",&ptr);
    printf("%d\n",*ptr);
    *ptr=*ptr+10;
    printf("%d\n",*ptr);
}
*/
/*#include <stdio.h>

void passing_args(int,int*);
void main()
{
    int a=10,b=20;
    printf("Before function call:\n");
    printf("a=%d,b=%d\n",a,b);
    passing_args(a,&b);
     printf("After function call:\n");
    printf("a=%d,b=%d\n",a,b);
}
void passing_args(int a,int *b)
{
    a=a+10;
    *b=*b+10;

}*/


/*#include<stdio.h>
int main()
{
    int arr[4]={5,10,15,20};
    printf("%d,%d\n",arr[0],&arr[3]);
    printf("%d,%d",arr+3,arr+4);
}*/
/*#include<stdio.h>
int main()
{
int arr[2][2]={5,10,15,20};
printf("%d,%d\n",arr[0][0],&arr[1][1]);
printf("%d,%d",arr,arr+4);

}*/
/*#include<stdio.h>
int main()
{
int arr[5]={5,10,15,20,25};
int i;
for(i=0;i<=4;i++){
    printf("%d,%d\n",*(arr+i),(arr+i));
}
}
*/
/*#include<stdio.h>
int main()
{
     int arr[4]={5,10,15,20};

    int i,*ptr;
    ptr=arr;
    for(i=0;i<=3;i++){
        printf("%d,%d\n",*ptr,ptr);
        ptr=ptr+1;
    }
}
*/
