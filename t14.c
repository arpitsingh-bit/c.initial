#include<stdio.h>
int main()
{
 int n;
    printf("enter the number");
    scanf("%d",&n);
    if(n<=1)
    {
        printf("number is not prime");
    }
    else
    {
        int is_prime = 1;

        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                is_prime = 0;
                break;
            }
        }

        if (is_prime==1)
        {
            printf("number is prime");
        }
        else
        {
            printf("number is not prime");
        }
    }
}
   
