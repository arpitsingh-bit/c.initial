#include<stdio.h>
int counteven(int arr[],int n);
int countodd(int arr[],int n);
int main ()
{
    int n;
    printf("enter the number of term you want to give in array ");

    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("your number in array are :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    int even =counteven(arr,n);
    int odd =countodd(arr,n);
    printf("\n");
    printf("number of even term is %d and number of odd term is %d",even ,odd);
}
int counteven(int arr[],int n)
{
    int count =0;
    for(int i=0;i<n;i++)
    { if (arr[i]%2==0)
        {
         count++;
        }
      
    }
    return count;

}
int countodd(int arr[],int n)
{
    int count =0;
    for(int i=0;i<n;i++)
    { if (arr[i]%2!=0)
        {
       count ++;
        }
        
    }
    return count;

}