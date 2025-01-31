#include <stdio.h>



int main()
{

printf("Matrics 1:\n");

    int n[2][2]={1,2,3,4};

    for(int i=0;i<=1;i++){
        for(int j=0;j<=1;j++){
            printf("%d  ",n[i][j]);
        }
        printf("\n");
    }


printf("Matrics 2:\n");
int m[2][2]={3,4,5,6};
    for(int i=0;i<=1;i++){
        for(int j=0;j<=1;j++){
            printf("%d  ",m[i][j]);
        }
        printf("\n");
    }


    printf("Sum of martrics 1 and martics 2:\n");
  int result[2][2];

    for(int i=0;i<=1;i++){
        for(int j=0;j<=1;j++){
            result[i][j]=n[i][j]+m[i][j];
            printf("%d  ",result[i][j]);
        }
        printf("\n");
}
}
