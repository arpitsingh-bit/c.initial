#include<stdio.h>
//taking input and giving outpout using string 
int main()
{
    int n;
    printf("enter the number of term you want to store i array :");
    scanf("%d",&n);
    printf("\n");
    int arr[n];
    printf("enter the number in array ");
    printf("\n");
    for (int i =0;i<n;i++)
    {
        printf("enter the element %d :",i);
        scanf("%d",(arr+i));

    }
    printf("enterd number in array are");
    for(int i =0;i<n;i++)
    {
        printf("%d",*(arr+i));
    }
    
    return 0;

}