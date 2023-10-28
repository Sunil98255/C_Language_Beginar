// Liner search in Array 
#include<stdio.h>
#include<conio.h>

int liner_search(int Array[] , int n ,int key)
{
    for(int i = 0 ; i<n ; i++)
    {
        if(Array[i]==key){
            return i;//--> For value is found
        }
    }
        return -1;//--> for value is not found
}
int main()
{
    int Array[] = {2,5,3,10,4};
    int key;
    int n = sizeof(Array) / sizeof(Array[0]);
    // int key = 3;//--> Searching Number

    printf("Eneter the Searching Number : ");
    scanf("%d",&key);//--> Searching Number
    int result = liner_search(Array, n, key);
    if(result != -1){
        printf("%d is %d index position ",key,result);
    }
    else{
        printf("%d is not found ",key);
    }

    getch();//--> For screen Hold
    return 0;
}