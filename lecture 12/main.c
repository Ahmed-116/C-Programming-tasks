#include <stdio.h>
float circumference(float);
void main()
{
    float radius,result;
    printf("Enter radius:");
    scanf("%f",&radius);
    result=circumference(radius);
    printf("%f",result);
}
float circumference(float radius)
{
    float result;
    result=2*3.14*radius;
    printf("circumference of circle with radius %f is ",radius);
    return result;
}
