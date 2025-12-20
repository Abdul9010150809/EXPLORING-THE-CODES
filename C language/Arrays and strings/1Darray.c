#include<stdio.h>
void main(){
int i,n,arr[10];//Declaring the variables
printf("Enter the numbers :");
scanf("%d",&n);//Intialising the value to n
for (int i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);//Intialising the values to array
}
printf("The array elements are : \n");
for ( i = 0; i < n; i++)
{
    printf("arr[%d]=%d \n",i,arr[i]);//printing the values and checking where they are stored
}
}