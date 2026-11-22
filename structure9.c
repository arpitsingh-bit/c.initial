#include<stdio.h>
#include<string.h>
//chnaging sturcture using piointer (call by refrence)

typedef struct person
{
    int age;
    char name[100];
   float salary ;
}info;
void change(info *p);
int main()
{
info p;
p.age =27;
strcpy(p.name,"arpit");
p.salary =27890;

printf("ORIGNAL VALUE\n");
printf("%s\n",p.name);
printf("%d\n",p.age);
printf("%f\n",p.salary);

change(&p);
printf("VALUE AFTER MODIFICATION \n");
printf("%s\n",p.name);
printf("%d\n",p.age);
printf("%f\n",p.salary);

}
void change(info *p)
{
(*p).age=29;
(*p).salary=67890;
strcpy((*p).name,"arpit singh");
}

