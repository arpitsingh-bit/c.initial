 #include<stdio.h>
 #include<string.h>
 //taking input and giving output using loop
 typedef struct information
 {
    int salary;
    char name[100];
    int age;
    float height;

     
 }info;
 int main()
 {
    info arr[3];
    for(int i=0;i<3;i++)
    {
        printf("enter the salary of  person :");
        scanf("%d",&arr[i].salary);

        printf("enter the age of person ");
        scanf("%d",&arr[i].age);

        printf("enter the height of person ");
        scanf("%f",&arr[i].height);
        getchar();
        printf("enter the name of person ");
        fgets(arr[i].name,100,stdin);

      
    }
    printf("\n");
    printf("INFORMATIO ABOUT 3 DIFFRENT PERSON\n");
    for(int i =0;i<3;i++)
    {
        printf("name of person %d is %s\n",i,arr[i].name);
        printf("salary is %d\n",arr[i].salary);
        printf("age is %d\n",arr[i].age);
        printf("height of person is %f",arr[i].height);

    }
    printf("\n");
    return 0;
 }