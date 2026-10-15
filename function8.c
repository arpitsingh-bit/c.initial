#include<stdio.h>
void total_price(float n);
int main()
{
    printf("enter the price");
    float n;
    scanf("%f",&n);
    total_price(n);
    return 0;
}
void total_price(float n)
{
   n= n+ (0.18*n);

   printf(" total price after gst is %f", n);
   
}

