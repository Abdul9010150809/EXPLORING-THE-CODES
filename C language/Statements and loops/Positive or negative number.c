#include<stdio.h>
int main(){
    int a;
    printf("Enter a number :");
    scanf("%d",&a);//Taking values of a
    if (a>0)//if number is greater than 0 it is positive number
    {
        printf("%d is positive \n",a);
    }
    else if (a<0)//if number is lesser than 0 it is negative number
    {
        printf("%d is negative \n",a);
    }
    else//if it doesnt satisfies above conditions it must be zero
    {
        printf("It is neiter pos nor neg but it is zero \n");
    }
    printf("Using single statement \n");
    (a>0)?printf("%d is positive \n",a): (a<0)?printf("%d is negative \n",a):printf("It is zero");
}
