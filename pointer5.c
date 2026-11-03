// difrent between call by value and call. y value 
#include<stdio.h>
int callbyvalue(int a);
int callbyrefrence(int *b);
int main()
{
    int a=10;
    int b=5;
     callbyvalue(a);
     callbyrefrence(&b);
     printf("after call by value a = %d",a);
     printf("\n");
     printf("after call by fefrence b = %d",b);
      return 0;

    
}
int callbyvalue(int a)
{
    a = a+10;
    return a;

}
int callbyrefrence(int *b)
{
    *b=*b+10;
    return *b;
}