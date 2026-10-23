#include<stdio.h>
int main()
{
    int marks[4];
    printf("enter 4 marks:");
    scanf("%d",&marks[0]);
    scanf("%d",&marks[1]);
    scanf("%d",&marks[2]);
    scanf("%d",&marks[3]);
    printf("percentage of student is %.2f%%\n",
           (marks[0] + marks[1] + marks[2] + marks[3]) * 100.0 / 400);
}