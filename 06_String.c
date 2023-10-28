#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i,j;

    printf("Enter The Value of n : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        char letter ='A'; // --> starting Letter
        for(j=1;j<=i;j++)
        {
            printf("%c",letter);
            letter++; // --> for New letter
        }
        printf("\n");
    }

    getch();
    return 0;
}