#include<stdio.h>
#include<conio.h>

int main()
{
    char name;
    int roll,cppm,ic,maths,cs,dpa,practical,sum;
    float pt;

    printf("Enter the student Name : ");
    scanf("%s",&name);

    printf("Enter student Roll No. : ");
    scanf("%d",&roll);

    printf("Enter student All subjects Marks : \n");

    printf("CPPM      : ");
    scanf("%d ",&cppm);
    printf("IC        : ");
    scanf("%d ",&ic);
    printf("MATHS     : ");
    scanf("%d ",&maths);
    printf("CS        : ");
    scanf("%d ",&cs);
    printf("DPA       : ");
    scanf("%d ",&dpa);
    printf("PRACTICAL : ");
    scanf("%d ",&practical);
   
    sum = cppm+ic+maths+cs+dpa+practical;
    pt = sum*100/600;
    printf("student Parcentage is : %f\n",pt);

    // gread accoding student parcentage

    if(pt>=90)
    {
        printf("A1 Grad");
    }
   else if(pt>=80 && pt<90)
   {
    printf("A2 Grad");
   }
   else if(pt>=70 && pt<80)
   {
    printf("B1 Grad");
   }
   else if(pt>=60 && pt<70)
   {
    printf("B2 Grad");
   }
   else if(pt>=50 && pt<60)
   {
    printf("C1 Grad");
   }
   else if(pt>=40 && pt<50)
   {
    printf("C2 Grad");
   }
   else if(pt>=33 && pt<40)
   {
    printf("D Grad");
   }
   else{
    printf("This student is Fail");
   }
   getch();
    return 0;
}