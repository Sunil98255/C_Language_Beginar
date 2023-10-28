#include<stdio.h>
#include<conio.h>

int main()
{
    int a = 10;
    int *point = &a;

    printf("The value is  %u ",point);

    getch();
    return 0;
}