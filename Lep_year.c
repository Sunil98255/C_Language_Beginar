// leap year and not leap year
#include<stdio.h>

int main()
{
    int year;
    printf("Enter the Year : ");
    scanf("%d",&year);

    if(year % 4 ==0)
    {
        printf("%d is leap year ",year);
    }
    else{
        printf("%d is not a leap year",year);
    }

    //second Method 
    //if( (year%4==0 && year%100 != 0) || (year %400 == 0))
    //{
    //    printf("%d is leap year ",year);
    //}
    //else{
    //    printf("%d is not a leap year",year);
    //}

    return 0;
}