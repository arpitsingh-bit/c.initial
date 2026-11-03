//finfing largesr number using pointer 
#include<stdio.h>
int max(int *arr,int n);
int main ()
{
    int arr[]={1,2,3,4,67,54,35};
    int n=8;
    int u= max(arr,n);
    printf("largenst number in the array is %d",u);
    return 0;
}
int max(int *arr,int n)
{
    int max=*arr;
    for(int i=0;i<n;i++)
    {
        if(*(arr+i)>max)
        {
            max=*(arr+i);
        }
    }
    return max;

}