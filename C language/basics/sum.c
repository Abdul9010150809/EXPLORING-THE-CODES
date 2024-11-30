#include<stdio.h>
int sum(int a,int b);
int main(){
int a=4,b=5;
sum(a,b);
}
int sum(int a,int b){
    printf("The sum of a and b is %d \n",a+b);
}
