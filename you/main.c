#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%c ",j+64);
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%c ",j+64);
        }
        printf("\n");
    }

}
