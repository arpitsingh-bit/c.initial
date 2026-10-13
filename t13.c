#include<stdio.h>
int main()
{
    int a;
    printf("enter the number ");
    scanf("%d",&a);
    switch(a%2==0)
    {
    case 1:
    printf(" entered number is even \n");
    break;
    case 0:
    printf("entered  number is odd \n");
    break;
    }
    
    
}