#include<stdio.h>
//recursion
int power_function(int n,int m);
int main()
{
int n,m;
printf("enter the base value");
scanf("%d",&n);
printf("enter the power value");
scanf("%d",&m);
int u=power_function(n,m);
printf("final value is %d",u);
return 0;

}
int power_function(int n,int m)
{
    if(m==0)
    {
        return 1;
    }
   
    return n*power_function(n,m-1);
}