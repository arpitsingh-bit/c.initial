#include<stdio.h>
#include <string.h>
typedef struct information 
{
    int age ;
    int slary;
    char job[100];
    char name [100];
}info;
void print(info p);
void check_similarity(info p,info q);
int main()
{
    info a[2];
    for (int i =0 ; i <2;i++)
    {
    printf("ENTER THE NAME OF PERSON :");
    fgets(a[i].name,100,stdin);
    printf("\n");

    printf("ENTER THE OCUPATION OF PERSON : ");
    fgets(a[i].job,100,stdin);
    printf("\n");

    printf("ENTER THE AGE OF PEROSN :");
    scanf("%d",&a[i].age);
    printf("\n");

    printf("ENTER THE SALARY OF PERSON :");
    scanf("%d",&a[i].slary);
    printf("\n");
    getchar();

    }
    printf("\n");
    printf("THE DETAILED YOU. HAVE ENTERED ARE :");
    printf("\n");
    for(int i =0 ;i<2;i++)
    {
        print(a[i]);

    }
    printf("\n \n");
    printf("\n");
    check_similarity(a[0],a[1]);
    printf("\n");
    printf("\n");

    return 0;
    }
    void print(info p)
    {
       printf("NAME OF PERSON IS %s :",p.name);
        printf("JOB OF PERSON IS %s:",p.job);
        printf("SALARY OF PERSON IS %d :",p.slary);
        printf("AGE IS %d :",p.age);
        printf("\n");

    }
    void check_similarity(info p,info q)
    {
        if(p.age==q.age)
        {
            printf("THE AGE OF BOTH PERSON IS SAME ");
        }
        else
        {
            printf("AGE IS DIFFRENT ");
        }
        printf("\n");
        if(p.slary==q.slary)
        {
            printf("THE BOTH EARN SAME ");
             
        }
        else{
            printf("THEY EARN DIFFRENT SALARY");

        }
        printf("\n");
        int is_name =1;
        for(int i=0;p.name[i]!='\0'|| q.name[i]!='\0';i++)
        {
            if(p.name[i]!=q.name[i])
             {
                is_name =0;
                break;
             }
        }
        if (is_name==1)
        {
            printf("NAME OF BOTH PERSON IS SAME ");

        }
        else 
        {
            printf("NAME IS DIFFENST FOR BOTH PERSON ");
        }
        printf("\n");
        printf("\n");
        int is_job=1;
        for(int i=0;p.job[i]!='\0'|| q.job[i]!='\0';i++)
        {
            if(p.job[i]!=q.job[i])
             {
                is_job =0;
                break;
             }
        }
        if (is_job==1)
        {
            printf("OCCUPATION  OF BOTH PERSON IS SAME ");

        }
        else 
        {
            printf("OCCUPATION IS DIFFENST FOR BOTH PERSON ");
        }
        printf("\n");

          }

    
