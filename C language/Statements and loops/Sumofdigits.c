#include<stdio.h>
int main(){
    int num,s=0,rem;//Declaring variables
    printf("Enter the number :");
    scanf("%d",&num);//intialising value to variable num
while(num!=0){//checking the condition Ex:15
    rem=num%10;//rem=15%10  rem=5
    s+=rem;//sum=0+5  sum=5
    num=num/10; //num=15/10  num=1
}
printf("Sum of the digits of given number is %d \n",s);
}