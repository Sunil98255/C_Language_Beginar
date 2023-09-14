// count Employ salary and post
#include<stdio.h>

int main()
{
    int salary;
    char name[50];
    printf("Enter the Name : ");
    scanf("%s",&name);
    printf("Enter the salary :");
    scanf("%d",&salary);

    if(salary<30000)
    {
        if(salary==20000)
        {
            printf("%s Role is HR",name);
        }
        else if(salary>15000)
        {
            printf("%s Role is Project Manager",name);
        }
        else{
            printf("%s Role is Employ",name);
        }
    }
    else{
        printf("Salary is Not valid");
    }

    return 0;
}