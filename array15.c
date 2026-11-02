#include<stdio.h>
// how to store n number of fibonaci  and even number and odd in array;
int main()
{
    int n;
    printf("number of fibonaci term");
    scanf("%d",&n);
    int fib[n];
    fib[0]=0;
    fib[1]=1;
    for(int i =2;i<n;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    printf("fibonaci number\t");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",fib[i]);
    }
    printf("\n");
    
   printf("\nenter the number of even number");
   int m;
   scanf("%d",&m);
   int even[m];
   for(int i=0;i<=m;i=i+2)
   {
    even[i]=i*2;
   }
   for(int i=0;i<m;i++)
   {
    printf("%d\t",even[i]);
   }
  printf("\n");
  

  printf("enter the number of odd term");
  int w;
  scanf("%d",&w);
  int odd[w];
   for(int i=1;i<w;i++)
   {
    
   odd[i-1]=i-1+i;
   }
   
   for(int i=0;i<w;i++)
   {
    printf("%d\t",odd[i]);
   }

}