#include<stdio.h>
long long int fact(long long int n);
int main()
{
    long long int n;
    printf("enter the number");
    scanf("%lld",&n);
    long long int f=fact(n);
    printf("factotial of the given number %lld is %lld",n,f);
    return 0;
}
long long int fact(long long int n)
{
    if(n==1)
    {
        return 1;
    }
    long long int fact1mN=fact(n-1);
    long long int factN = fact1mN*n;
    return factN;
}