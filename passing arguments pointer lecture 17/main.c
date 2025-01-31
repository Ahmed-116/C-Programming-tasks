#include <stdio.h>


int main()
{
    int arr[4]={5,10,15,20};
    int i,*ptr;
    ptr=arr;
    for(i=0;i<=3;i++)
    {
        printf("%d,%d\n",*ptr,ptr);
        ptr=ptr+1;
    }

}
/*
#include<stdio.h>
void largestNo(int[],int);
void main()
{
    int ages[5]={5,2,4,9,6};
    largestNo(ages,5);
}
     void largestNo(int arr[],int size)
     {
         int max,i;
         max=arr[0];
         for(i=1;i<size;i++)
         {
             if(max<arr[i])
                max=arr[i];
         }
         printf("LargestNo is %d",max);
     }
*/
/*
#include<stdio.h>
void largestNo(int arr[],int size);
void main()
{


    int ages[5]={2,4,6,8,9};
    largestNo(ages,5);
}
void largestNo(int arr[],int size)
{


    int i;
    for(i=0;i<size;i++)
    {
        arr[i]=arr[i]+10;
        printf("%d ",arr[i]);
    }

}*/

/*
#include<stdio.h>
void passingArray(int arr[2][2],int,int);
void main()
{
    int ages[2][2]={5,10,15,20};
    passingArray(ages,2,2);
}
void passingArray(int arr[2][2],int rows,int cols)
{
    int i,j;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            arr[i][j]=arr[i][j]+10;
        printf("%d ",arr[i][j]);}
    }
}

*/
