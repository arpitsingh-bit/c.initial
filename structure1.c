#include<stdio.h>
#include<string.h>
//basic printing of structure 

struct student {
    int roll;
    float cgpa;
    char name[100];

};
int main()
{
    struct student s1;
    s1.roll=40;
    s1.cgpa=9.5;
    strcpy(s1.name,"arpit singh");
    printf("name of student is %s\n",s1.name);
    printf("roll number of student is %d\n",s1.roll);
    printf("CGPA of student is %f\n",s1.cgpa);

}