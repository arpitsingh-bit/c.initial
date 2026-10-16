#include <stdio.h>
int fib(int a);
int main()
{
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    printf("%d th fibonaci number is %d ",a,fib(a));
    return 0;
}
int fib(int a)
{
    if(a==0||a==1)
    {
        if(a==0)
        {
            return 0;
        }
        if(a==1)
        {
            return 1;
        }
    }
    int fibN=fib(a-1);
    int fibM=fib(a-2);
    int fibF= fibN+fibM;
    return  fibF;
}