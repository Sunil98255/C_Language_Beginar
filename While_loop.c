// Basic While Loop Program for Practice
#include<stdio.h>

int main()
{
    int num;
    printf("Enter the Number : ");
    scanf("%d",&num);
    while (num<10)
    {
        printf("The While Value is %d\n",num);
        num++;
    }

    return 0;
}