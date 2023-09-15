#include<stdio.h>

int main()
{
    int a,b,result;
    printf(" 1.Addition\n 2.subtraction\n 3.Multiplication\n 4.Division\n");
    printf("Enter the First valuev : ");
    scanf("%d",&a);

    printf("Operator : ");
    scanf("%d",&result);

    printf("Enter the second valuev : ");
    scanf("%d",&b);

    switch(result)
    {
        case 1:
            printf("Addition %d and %d is : %d",a,b,a+b );
            break;
        case 2:
            printf("Subtraction %d and %d is : %d",a,b,a-b );
            break;
        case 3:
            printf("Multiplication %d and %d is : %d",a,b,a*b );
            break;
        case 4:
            printf("Division %d and %d is : %d",a,b,a/b );
            break;    
    }
    return 0;
}