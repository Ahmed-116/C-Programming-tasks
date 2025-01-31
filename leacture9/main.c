#include <stdio.h>
void pakistan();
void india();
void saudia();

int main()
{
    printf("In main()\n");
    india();
    pakistan();//function call
    printf("Back in main\n");
}
void pakistan()
{
    printf("In pakistan\n");
}
void india()
{
    printf("In india\n");
    saudia();
}
void saudia()
{
    printf("In saudia\n");
}
