#include<stdio.h>
int main(){
    int num1,num2,num3; //declaring 3 variables
    printf("Enter 3 numbers :");
    scanf("%d %d %d",&num1,&num2,&num3);//intialising 3 variables
    if (num1>num2) //Checking the condition
    {
        if (num1>num3)
        {
            printf("%d is largest number \n",num1);//printing the statement if condition satisfies
        }
        else
          printf("%d is largest number \n",num3);//printing the statement if condition does not satisfies
    }
    else
    {
        if (num2>num3)
        {
              printf("%d is largest number \n",num2);//printing the statement if condition  satisfies
        }
        else
          printf("%d is largest number \n",num3);//printing the statement if condition does not satisfies
    }
    
}