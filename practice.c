#include<stdio.h>
int main ()
{
    int n;
    printf ("enter the number");
    scanf("%d",&n);
    for ( int i =1;i<=n;i++)
    {
        if(i%3==0)
        {
            printf("buzz\n");
        }
        else if(i%5==0)
        {
            printf("fizz\n");

        }
        else{
            printf("%d\n",i);
        }
    }
    return 0;

}
