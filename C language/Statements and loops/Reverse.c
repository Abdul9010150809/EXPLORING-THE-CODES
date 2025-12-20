#include<stdio.h>
int main(){
    int n,rem;//declaring variables
    printf("Enter a number :");
    scanf("%d",&n);//Intialising value to n
    printf("The reverse of %d is ",n);
    while(n!=0){//if n=23 checking condition
    rem=n%10;//23%10=3
    printf("%d",rem);//print 3
    n=n/10;//23/10=2 again this will repeat until n==0
    }
    printf("\n");
}