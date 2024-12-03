#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the 2 numbers :");
    scanf("%d %d",&a,&b);
    printf("before swap :%d %d",a,b);
    c=a;
    a=b;
    b=c;
     printf("\n after swap :%d %d",a,b);
      printf("\n Without temporary variable \n");
a=a+b;
b=a-b;
a=a-b;
printf("after swap without t:%d %d \n",a,b);
} 
