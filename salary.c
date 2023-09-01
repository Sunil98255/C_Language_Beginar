#include<stdio.h>
#include<conio.h>

int main()
{
    printf("Employe Salary Calaculation \n");
    int id,ms,cut,tms,ys;

    // Employ id :
    printf("Enter Employ id number : ",id);
    scanf("%d", &id);

    // Employ Monthly salary
    printf("Enter Employ Monthly Salary is : ");
    scanf("%d",&ms);

    // Employ 10%pf,medical and tex
    cut = (ms/10) + 500 +300;
    printf("Total cut amount : %d\n",cut);

    // Employ salary after cut 10% pf , 500 medical and 300 tex
    tms = ms - cut;
    printf("Employ Total Monthly Salary : %d\n", tms);


    // Employ Annual Salary packeg
    ys = tms*12;
    printf("Employ Annual salary package : %d",ys);
    getch();

    return 0;
}