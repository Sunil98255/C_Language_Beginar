// count word lenght
#include<stdio.h>
#include<string.h>

int main()
{
    char name[50];
    int lenght;
    printf("Enter your World : ");
    scanf("%s",&name);
    lenght = strlen(name);
    printf("lenght is %d",lenght);
    
   return 0;
}