// Swap Two Number without using third veriable
#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b;

    printf("Enter the First Number : ");
    scanf("%d",&a);
    printf("Enter the Second Number : ");
    scanf("%d",&b);

    printf(" a = %d\n b = %d \n",a,b);

    // ex. a = 2 , b = 3
    a = a + b; //--> ex. 2 + 3 = 5 'a' new value
    b = a - b; //--> ex. 5 - 3 = 2  'b' new value
    a = a - b; //--> ex. 5 - 2 = 3  again 'a' new value 

    printf(" After Swaping The Number : \n");
    printf(" a = %d\n b = %d ",a,b);

    getch();
    return 0;
}