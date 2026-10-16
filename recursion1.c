#include<stdio.h>
int sum_of_nterm(int n);
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int s = sum_of_nterm(n);
    printf("sum of digit of %d is = %d", n,s);
    return 0;


}
int sum_of_nterm(int n)
{
    
    if(n==1)
    {
        return 1;
    }
   
    int sum1mN = sum_of_nterm(n-1);
    int sumN= sum1mN + n;
    return sumN;
}