#include<stdio.h>
// sum of all array 
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int sum=0;
    for(int i =0;i<8;i++)
    {
        sum = sum + arr[i];
    }
    printf("sum of all value in array is %d",sum);
    return 0;
}