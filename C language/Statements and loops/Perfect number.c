#include<stdio.h>
int main(){
    int i,s,n;
    printf("Enter the number :");
    scanf("%d",&n);
    for ( i = 1; i <n; i++)
    {
        if (n%i==0)
        {
            s=s+i;
        }
    }
if (s==n)
{
    printf("perfect number");
}
else
{
 printf("It is not perfect number \n");
}
}