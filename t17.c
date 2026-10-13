#include<stdio.h>
int main()
//continue statment
{
    int n, i;

    printf("enter the number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            continue;

        }
        printf( "%d\n",i);
    }
    printf("end");
    return 0;
}