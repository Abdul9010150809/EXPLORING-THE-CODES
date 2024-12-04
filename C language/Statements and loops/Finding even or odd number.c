#include<stdio.h>
int main(){
    int a;
    printf("Enter a number :");
    scanf("%d",&a);//taking a number from user
    if (a%2==0)//checking number is exactly divisible by 2 or not
    {
        printf("%d is even \n",a);
    }
    else//if number doesnt satisfies condition it goes through the below process  
    {
         printf("%d is odd \n",a);
    }
printf("Using single statement \n");
    (a%2==0)?printf("%d is even \n",a):printf("%d is odd \n",a);
}