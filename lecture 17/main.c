/*#include <stdio.h>
void largestno(int[],int);


void main()
{
    int ages[5]={5,2,4,9,6};
    largestno(ages,5);

}
void largestno(int arr[],int size)
{
    int max,i;
    max=arr[0];
    for(i=1;i<size;i++)
    {
        if(max<arr[i])
            max=arr[i];
    }
    printf("Largestno is :%d",max);
}
*/
#include<stdio.h>
void passingarray(int arr[2][2],int,int);

void main()
{
    int ages[2][2]={5,10,15,20};
    passingarray(ages,2,2);

}
void passingarray(int arr[2][2],int rows,int cols)
{
    int i,j;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++)

    arr[0][0]=arr[0][0]+10;
    printf("%d",arr[0][0]);
}
}
