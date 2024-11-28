#include<stdio.h>
int main(){
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    if (a>0)
    {
        printf("%d is positive \n",a);
    }
    else if (a<0)
    {
        printf("%d is negative \n",a);
    }
    else
    {
        printf("It is neiter pos nor neg but it is zero \n");
    }
    printf("Using single statement \n");
    (a>0)?printf("%d is positive \n",a): (a<0)?printf("%d is negative \n",a):printf("It is zero");
}
