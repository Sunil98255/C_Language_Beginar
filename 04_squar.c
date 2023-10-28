#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,n;

    printf("Enter The Number : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1 || i==n || j==1 || j==n)
            {
                printf("* "); //--> for squar star
            }
            else{
                printf("  ");//-->For mid Space
            }
        }
        printf("\n");
    }

    getch();
    return 0;
}