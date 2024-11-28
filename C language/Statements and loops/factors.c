#include<stdio.h>
int main(){
int a,b,c,i;
printf("Enter the number by using for loop :");
scanf("%d",&a);
for ( i = 1; i <=a; i++)
{
    if (a%i==0)
    {
        printf("%d \t",i);
    }
}
printf("\n Enter the number by using while loop :");
scanf("%d",&b);
int j=1;
while (j<=b)
{
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
 if (c%k==0)
    {
        printf("%d \t",k);
    }
k++;   
} while (k<=c);
printf("\n");
}