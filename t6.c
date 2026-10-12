#include<stdio.h>
int main()
{
    float radius;
    printf("enter the radius of circle:");
    scanf("%f",&radius);
     
    float pi=3.14;

    printf("area of circle: %f", pi*2*radius*radius);
    return 0;
}