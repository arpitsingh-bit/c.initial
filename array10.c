#include<stdio.h>
//to count the number of even number 
void counteven(int arr[],int n);
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};
    counteven(arr,17);
    return 0;
}
void counteven(int arr[],int n)
{
    int count =0;
    for (int i =0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            count ++;
        }
    }
   printf("number of even term in array is :%d",count);
}