#include <stdio.h>
#include <stdlib.h>

int main()
{
    char alphabet='a';
    switch(alphabet)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("vowel");

      break;
    default:
        printf("consonent");

    }
    return 0;
}

