#include<stdio.h>
void reverse_number(int n);
int main()
{
int n;
printf("enter the number");
scanf("%d",&n);
reverse_number(n);
return 0;
}
void reverse_number(int n)
{
    int reverse=0,remainder;
    while(n>0)
    {
        remainder=n%10;
        reverse = reverse*10 + remainder;
        n/=10;
       
    }
    
  printf(" reverse of number is %d :",reverse);
}