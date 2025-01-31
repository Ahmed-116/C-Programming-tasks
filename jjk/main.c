#include <stdio.h>


int main()
{
    int i,j,k;
    for(i=1;i<=10;i++){
        for(j=1;j<=10-i;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("1 ");
        }
        printf("\n");
    }
    for(i=9;i>=1;i--){
       for(j=1;j<=10-i;j++){
            printf(" ");
    }
    for(k=1;k<=i;k++){
            printf("* ");

    }
     printf("\n");
    }

}
