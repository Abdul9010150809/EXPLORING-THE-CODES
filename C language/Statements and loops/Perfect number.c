#include<stdio.h>
int main(){
    int i,s,n;
    printf("Enter the number :");
    scanf("%d",&n);//Taking value from user
    for ( i = 1; i <n; i++)
    {
        if (n%i==0)//checking if n is divided by values of i or not
        {
            s=s+i;//Adding the value of i to the s 
        }
    }
if (s==n)//if sum is equal to number it is perfect number
{
    printf("perfect number");
}//Example:6 factors were 1,2 and 3. 6=1+2+3 so 6 is a perfect number
else
{
 printf("It is not perfect number \n");
}
}