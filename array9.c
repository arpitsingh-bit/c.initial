#include<stdio.h>
//to count the number of odd term;
int countodd(int arr[],int n);
int main ()
{
    int array[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};
     int odd =countodd(array,17);
     printf("number of odd term is %d",odd);
    return 0;

}
int countodd(int arr[],int n)
{
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0)
        {
            count ++;
        }
    }
    return count;
}