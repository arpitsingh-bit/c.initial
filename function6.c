#include <stdio.h>
void add();
int main()
{
    add();

}
void add()
{
    int a,b;
    printf("enter trhe number:");
    scanf("%d %d", &a , &b);
    printf("%d",a+b);
    
}
// without arrgument without return