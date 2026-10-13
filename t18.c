#include<stdio.h>
int main()
{
    int day;
    printf("enter the number of days :");
    scanf("%d",&day);
    int year = day/365;
    int week = (day%365)/7;
    int days = (day%365)%7;
    printf(" %d days is eual to : %d years %d week %d days ", day, year,week, days);
    return 0;
}