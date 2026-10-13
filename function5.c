#include <stdio.h>
int add();
int main ()
{
printf("addition %d",add());
return 0;
}
int add()
{
    int a ,b;

    printf("enter the number");
    scanf("%d %d",&a,&b);
    return a+b;

}
//no argument with return 