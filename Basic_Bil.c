#include<stdio.h>

int main()
{
    char name; //product name
    double price,qn,total;
    float dis,NetAmount;

    printf("Enter the Product Name   : ");
    scanf("%s",&name);
    printf("Enter the Product Price  : ");
    scanf("%lf",&price);
    printf("Enter the Product Quantity: ");
    scanf("%lf",&qn);

    total = price * qn;
    

    if(total<500)
    {
        printf("Total is : %.2lf\n",total);
        dis=0;
        printf("Discount : %.2f",dis);
    }
    else if(total>=500 && total<1000)
    {
        printf("Total is : %.2lf\n",total);
        dis = 0.5*total; 
        printf("Discount : %.2f",dis);
    }
    else{
        printf("Total is : %.2lf\n",total);
        dis=0.10*total;
        printf("Discount : %.2f",dis);
    }

    NetAmount = total - dis;
    printf("\n Net Amount is :%.2f",NetAmount);
    return 0;

}