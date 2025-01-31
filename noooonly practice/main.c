#include<stdio.h>
int main()
{


int rows, i, j, spaces;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (spaces = 1; spaces > i; spaces--) {
            printf(" ");
        }
        for (j = i; j <= rows; j++) {
            printf("*");
        }
        printf("\n");
    }
}
