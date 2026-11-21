#include<stdio.h>
#include <string.h>
struct person{
    char name[100];
    int age;
    float salary;

};
int main()
{
    struct person p1;
    strcpy(p1.name,"arpit singh");
    p1.age=34;
    p1.salary=39900;
    struct person p2;
    strcpy(p2.name,"arpit singh raguvanshi");
     p2.age=24;
    p2.salary=39400;

    printf("name of person 1 %s\n",p1.name);
    printf("salary of second person is %f",p2.salary);

}
