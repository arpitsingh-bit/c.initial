#include<stdio.h>
int primecheck(int n, int i);
int main()
{
    int n;
    printf("enter the number you want to check");
    scanf("%d",&n);
    int check = primecheck(n,n /2);
    if(check ==1)
    {

    
        printf("enterd number is prime number");
    }
    else
    {
        printf("enterd number is not a prime numer");
    }
    return 0;
    
}
int primecheck(int n, int i)
{
if(n<=1)
{
    return 0;
}
if(i==1)
{
    return 1;

}
if(n%i==0)
{
    return 0;
}
return primecheck(n, i - 1);
}