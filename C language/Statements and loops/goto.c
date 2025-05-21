#include<stdio.h>
int main(){
    int n,i=1;//Declaring variables
    printf("Enter a numbers :");
    scanf("%d",&n);//Intialising a value to n
    table:
    printf("%d * %d =%d \n",n,i,n*i);
    i++;
    if (i<=10)
    {
        goto table;
    }
}