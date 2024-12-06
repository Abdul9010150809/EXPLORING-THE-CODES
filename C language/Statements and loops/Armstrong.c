#include<stdio.h>
int main(){
    int n,rem,sum=0,temp;//Declaring variables
    printf("Enter a number :");
    scanf("%d",&n);//intialising value to n
    temp=n;
    while (n!=0)//checking condition Ex:12
    {
        rem=n%10;//rem=12%10, rem=2
        sum=sum+(rem*rem*rem); //sum=0+(2*2*2) sum=8
        n=n/10; //n=12/10 n=2
    }
    if(sum == temp)
    printf("%d is Armstrong \n",temp);
    else
     printf("%d is not Armstrong \n",temp);
}