#include<stdio.h>
// using two argument
void increasing(int n,int m);
int main()
{
    int n;
    printf("enter the number till where you want to print :");
    scanf("%d",&n);
    increasing(1,n);
    return 0;
}
void increasing(int n,int m)
{
    if(n>m)
    {
        return;
    }
    printf("%d\n",n);
    increasing(n+1,m);
}