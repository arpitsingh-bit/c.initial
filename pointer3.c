#include<stdio.h>
int main()
{
    int num1,num2;
    int*ptr1=&num1;
    int *ptr2=&num2;
    printf("enter the number :");
    scanf("%d %d",ptr1,ptr2);
    if(*ptr1>*ptr2)
    {
        printf("num1 %d is greater than num2 %d",*ptr1,*ptr2);
    }
    else if(*ptr1<*ptr2)
    {
        printf("num2 %d is greater tha num1 %d",*ptr2,*ptr1);
    }
    else 
    {
        printf("bothe number are eual");
    }
}
