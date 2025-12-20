#include<stdio.h>
void main(){
int i,n,arr[10],num,pos=0,p;//Declaring the variables
printf("Enter the size of array :");
scanf("%d",&n);//Intialising the value to n(Taking size of array)
printf("Enter the numbers :");
for (int i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);//Intialising the values to array
}
printf("The array elements are : \n");
for ( i = 0; i < n; i++)
{
    printf("arr[%d]=%d \n",i,arr[i]);//printing the values and checking where they are stored
}
printf("Enter the number to insert :");
scanf("%d",&num);//Intialising a value to num which have to be inserted
printf("Enter the position to insert ");
scanf("%d",&pos);//Intialising the position to know where number have to be inserted
for ( i = n; i>=pos; i--)
{
    arr[i+1]=arr[i];//Increment the size of position of array
}
n=n+1;//Incrementing the size of array
arr[pos]=num;//Intialising the num to array of position
printf("The new array elements are : \n");
for ( i = 0; i < n; i++)
{
    printf("%d \t",arr[i]);//printing the array after insertion
}
printf("\n");
int del;
printf("Enter the position of number which have to be deleted \n");
scanf("%d",&del);
for ( i =del; i<n; i++)
{
    arr[i]=arr[i+1];//Change the size of position of array based on given position
}
n=n-1;//The size of array is decremented by 1
for ( i = 0; i < n; i++)
{
    printf("%d \t",arr[i]);//printing the array after deletion
}
printf("\n");
}