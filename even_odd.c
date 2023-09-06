// Even and Odd Number 
#include<stdio.h>

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

    if(num%2==0)
    {
        printf("%d is Even Number ",num);
    }
    else{
        printf("%d is Odd Number ",num);
    }

    getch();
    return 0;
}