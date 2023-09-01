// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>

int main() {
    // Write C code here
    char name[50];
    printf("Enter the input : ");
    scanf("%s",&name);
    printf("reverce screen  is:%s",strrev(name));
    return 0;
}