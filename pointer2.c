#include<stdio.h>
void swap(int *a, int *b);
int main()
{
    int a,b;
printf("enter the number");
scanf("%d",&a);
printf("enter the 2nd number");
scanf("%d",&b);
swap(&a, &b);
printf("a= %d and b= %d",a,b);


}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}