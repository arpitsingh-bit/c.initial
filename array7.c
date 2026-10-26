#include<stdio.h>
// findin the greates number in number
int main()
{
    int arr[]={44,45,67,78,89,97,44,33};
    int max =arr[0];
    for(int i =0; i <8;i++)
    {
      if (arr[i]>max)
      {
        max=arr[i];
      }
    }
    printf("%d is the greatest number in array ", max);
}