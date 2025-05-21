#include<stdio.h>
int main(){
int a,b,c,i;
printf("Enter the number by using for loop :");
scanf("%d",&a);//Taking value from user
for ( i = 1; i <=a; i++)
{
    if (a%i==0)// using for loop checking the number is exactly divisible by value of i
    {
        printf("%d \t",i);
    }
}
printf("\n Enter the number by using while loop :");
scanf("%d",&b);
int j=1;
while (j<=b)
{// using while loop checking the number is exactly divisible by value of j
if (b%j==0)
    {
        printf("%d \t",j);
    }
j++;
}
printf("\n Enter the number by using do while loop :");
scanf("%d",&c);
int k=1;
do
{
 if (c%k==0)// using do while loop checking the number is exactly divisible by value of k
    {
        printf("%d \t",k);
    }
k++;   
} while (k<=c);
printf("\n");
}