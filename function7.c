#include<stdio.h>
void table(int x);
int main()
{
    int a;
printf("enter the number :");
scanf("%d",&a);
table(a);
return 0;
}
void table(int x)
{
    int i =1 ;
    while(i<=10){
        int n= x*i;
        printf("%d\n",n);
      i++;
    }
}