#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of term you want in fibonaci series");
    scanf("%d",&n);
    int first=0;
    int second=1;
    int nextterm;
    printf("1 term of fibonaci is 0\n");
    printf("2 term of fibonaci 1\n");
    for(int i=3;i<=n;i++)
    {
        
       nextterm=first+second;
       printf("%d term of fibonci is %d\n",i,nextterm);
       first=second;
       second=nextterm;

    }
    return 0;
}