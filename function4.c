#include<stdio.h>
int sum(int a,int b);
int main ()
{
    int a,b;
    
    printf("enter the number");
    scanf("%d %d",&a ,&b);
   
    printf("sum of %d %d is %d ", a,b,sum(a,b));
    return 0;
}
int sum(int a, int b)
{
return a+b;
}
//with argument and with return 