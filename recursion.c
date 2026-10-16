#include<stdio.h>
void hello(int count);
int main()
{
    hello(8);
    return 0;
}
void hello(int count)
{
    if (count == 0)
    {
        return ;
    }
    printf("hello arpit singh\n");
    hello(count-1);
}