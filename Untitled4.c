//M.Ahmed
//SP 24 BSE 066
#include <stdio.h>

int main()
{
    char operator;
    int number_1, number_2, result;

    printf("Enter operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%d%d", &number_1, &number_2);

    if (operator == '+')
        result = number_1 + number_2;
     else
        if (operator == '-')
        result = number_1 - number_2;
     else
      if (operator == '*')
        result = number_1 * number_2;
     else
      if (operator == '/')
            result = number_1 / number_2;
            printf("Result:%d\n", result);

    return 0;
}
