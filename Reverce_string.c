// Reverce String Function
#include<string.h>
#include<stdio.h>

int main() {
    // Write C code here
    char name[50];
    printf("Enter the input : ");
    scanf("%s",&name);
    printf("reverce screen  is:%s",strrev(name));
    return 0;
}