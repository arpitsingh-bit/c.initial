#include<stdio.h>
int main()
{
    float price[] = {100,244,455};
    printf("total price 1 : %f\n ",price[0]+(0.18*price[0]));
    printf("total price 2 : %f\n ",price[1]+(0.18*price[1]));
    printf("total price 3 : %f\n ",price[2]+(0.18*price[2]));
}