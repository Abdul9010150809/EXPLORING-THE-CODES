#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the 2 numbers :");
    scanf("%d %d",&a,&b);//Taking values pf a and b by user
    printf("before swap :%d %d",a,b);
    c=a;
    a=b;
    b=c;//Swapping the numbers with a temporary variable
     printf("\n after swap :%d %d",a,b);
      printf("\n Without temporary variable \n");
a=a+b;
b=a-b;
a=a-b;//Swapping the numbers without  a temporary variable
printf("after swap without t:%d %d \n",a,b);
} 
