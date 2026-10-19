#include<stdio.h>
// take input of number from user and the find the sum of add number and even number in the number seprately
int main()
{
    int n;
    int remainder;
    int sumodd=0;
    int sumeven=0;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=n;i>0;i/=10)
    {
        //finding digit number
        remainder= i%10;
        if(remainder%2==0)
        {
            sumeven=sumeven+remainder;
        }
        else 
        {
            sumodd=sumodd+remainder;
        }
    }
    printf(" sum of even digit in number%d\n",sumeven);
    printf("sum of odd digit in number %d",sumodd);
    return 0;
}