#include<stdio.h>
void decresing(int n);
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    decresing(n);

}
void decresing(int n)
{
    if (n==0)
    {
        return ;

    }
    printf("%d\n",n);
    decresing(n-1);


}
    
