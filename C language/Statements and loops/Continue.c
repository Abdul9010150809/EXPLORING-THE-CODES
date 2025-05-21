#include<stdio.h>
int main(){
    int n,m;//Declaring variables
    printf("Enter a number to print upto given number times :");
    scanf("%d",&n);//Intialising a value to n
    printf("The numbers are ");
    for (int i = 0; i <=n; i++)//i iterates until the condition goes wrong
    {
        printf("%d \t",i); 
    }
    printf("\n Enter a number to remove from the flow :");
    scanf("%d",&m);
    for (int  j= 0; j <=n; j++)
    { 
        
        if (j==m)
        {
            continue;//usage of continue statement j iterates and stop when j is equal to m and again iterates its flow
        }
        printf("%d \t",j);
    }
    printf("\n");
}