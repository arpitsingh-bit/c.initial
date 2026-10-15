#include<stdio.h>
void area_of_shape(char ch);
int main ()
{
   printf("shape code\n");
   printf("c or C for circle\n \n");
   printf("s or S for square\n \n");
   printf("r or R for rectangle\n \n");
    char ch;
    // declaration of shape 
    printf("enter the shape whose area you want to check :");
    scanf("%c",&ch);
    area_of_shape(ch);
    return 0;
    

}
void area_of_shape(char ch)
{
    float a,b,r;
    float area;
if(ch=='c'|| ch=='C')
{
    printf("enter the radius of circle ");
    scanf("%f",&r);
    area = 3.14*r*r;
    printf("area of circle of radius %f is :%f ",r,area);
}
else if (ch=='s'||ch=='S')
{
    printf("enter the side length");
    scanf("%f",&a);
    area = a*a;
    printf(" area of square of side length %f is : %f ",a,area);

}
else if (ch=='r'||ch=='R')
{
    printf("enter the length and breath");
    scanf("%f %f",&a,&b);
    area = a*b;
    printf("area of rectangle of lenght %f and breath %f is: %f ", a, b, area);
}
else 
{
    printf("please enter the valid shape code");
}
}