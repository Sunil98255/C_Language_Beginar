// Maximam Number Find out 
#include<stdio.h>

int main()
{
    int num1,num2;
    printf("Enter the first Number : ");
    scanf("%d",&num1);
    printf("Enter the Second Number :");
    scanf("%d",&num2);

    if(num1<num2)
    {
        printf("The Gratest Number is : %d",num2);
    }
    else{
        printf("The Gratest Number is :%d",num1);
    }

    return 0;
    getch();
    
}