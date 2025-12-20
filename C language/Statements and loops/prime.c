#include<stdio.h>
int main(){
    int n,i,fact=0;
    printf("Enter a number :");
    scanf("%d",&n);//Intialising a number
    for ( i = 2; i <n/2; i++)//checking the condition Ex:5 2<5/2 2<2.5
    {
        if (n%i==0)//5%2!=0 so fact doesnt changes.If ex:6 6%2==0 it satisfies condition
        {
            fact++;//as 6 satisfies condition fact iterates and value becomes 1.
        }
    }
  if (fact==0) //it satisfies condition if it is prime
  {
    printf("%d is Prime \n ",n);
  }
   else //If above question  doesnt satisfies it prints following statement
   printf("%d is not a prime number \n",n);
}