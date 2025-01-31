/*#include <stdio.h>


int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int space=0;space<=i;space++)
            printf(" ");
        for(int j=1;j<=i;j++)
            printf("* ");
             printf("\n");
    }

    return 0;
}*/
#include <stdio.h>

int main() {
    int rows = 4; // Number of rows
    int i, j, num = 1, space;

    // Loop through each row
    for (i = 0; i < rows; i++) {
        // Print spaces before numbers
        for (space = 0; space < rows - i - 1; space++) {
            printf("  ");
        }

        // Print left side numbers
        for (j = 0; j <= i; j++) {
            printf("%d ", num);
            num++;
        }

        // Print right side numbers
        for (j = 0; j < i; j++) {
            printf("%d ", num);
            num++;
        }

        printf("\n"); // Move to the next line
    }

    return 0;
}

