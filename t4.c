#include<stdio.h>
int main()
{
    int a, b;
    printf("enter your first number: ");
    scanf("%d",&a);

    printf("enter the second number: ");
    scanf("%d",&b);
     
    //sum of two number 
    int sum=a+b;
    //diffrence of two number 
    int diff =a-b;
    // product of two number
    int product = a*b;

    printf("sum of two number= %d \n", sum);
    printf("diffrence of two number = %d \n", diff);
    printf("product of two number =%d \n", product);
    return 0;
}