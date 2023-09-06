// Find Bigest Number of 3 numbers
#include<stdio.h>

int main()
{
    int num1,num2,num3;
    printf("Ener the first Number : ");
    scanf("%d",&num1);
    printf("Ener the Second Number: ");
    scanf("%d",&num2);
    printf("Ener the Third Number : ");
    scanf("%d",&num3);

    if(num1<num3 && num2<num3)
    {
        printf("%d is the Maximan Number",num3);
    }
    else if(num1<num2 && num3<num2)
    {
        printf("%d is the Maximan Number",num2);
    }
    else{
        printf("%d is Maximan Number",num1);
    }

    getch();
    return 0;
}