#include<stdio.h>
int main()
{
    int a;
    printf("enter the number you want to check:");
    scanf("%d",&a);
    // check its divisible by 2 or not
    printf("%d", a%2==0);
    return 0;
}