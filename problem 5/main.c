#include <stdio.h>

int main()
{
    char choice='y';
    char character;
    while (choice=='y')
    {


    printf("Enter a character:");
    scanf("%c",&character);
    switch(character)
    {
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
        printf("Normal digit\n");
    break;
    case '$':
    case '%':
    case '&':
        printf("Special character\n");
    break;
    default:
        printf("Neither normal nor special character\n");
    }
    printf("Do you want to continue\n");
    getchar();
    choice=getche();
    }


    }
