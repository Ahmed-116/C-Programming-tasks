#include <stdio.h>
int main()
{
    int ages[5];
    ages[0]=5;
    ages[4]=25;
    ages[3]=20;
    ages[1]=10;
    ages[2]=15;

    {

        ages[0]=ages[3]+ages[4];
    }
}
