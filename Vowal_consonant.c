// Vowal and Consonant Program
#include<stdio.h>

int main ()
{
    // a,e,i,o ---> vowel
    //Remaining all ----> consonant

    char ch;
    printf("Enter the character : ");
    scanf("%c",&ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf("%c is Vowal ",ch);
    }
    else{
        printf("%c is Consonant ",ch);
    }

    return 0;
}