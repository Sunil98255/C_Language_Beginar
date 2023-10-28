///number sum calculate progarm
#include<stdio.h>
#include<conio.h>

int main()
{
    int i,n,sum=0;

    printf("Eneter the number for sum : ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        sum+=i;
    }
    printf("%d",sum);

    getch();
    return 0;
}