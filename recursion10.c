#include<stdio.h>
//by adjusting fuction call before pritf
void increase(int n);
int main ()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    increase(n);
    return 0;
}
void increase(int n)
{
    if(n==0)
    {
        return;
    }
    increase(n-1);
    printf("%d\n",n);
}