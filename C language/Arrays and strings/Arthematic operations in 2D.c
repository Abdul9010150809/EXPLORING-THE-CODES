#include<stdio.h>
#include<stdlib.h>
int main(){
    int m,n,i,j,arr1[10][10],arr2[10][10],k,p,q;//Declaring variables
printf("Enter the sizes of arr1 :");
scanf("%d %d",&m,&n);//intialising sizes of array1
printf("Enter the sizes of arr2 :"); 
scanf("%d %d",&p,&q);//intialising sizes of array2
printf("Enter the values of arr1 :");
for ( i = 0; i <m; i++)
{
    for ( j=0; j< n; j++)
    {
        scanf("%d",&arr1[i][j]);//Intialising values to array1
    }
    
}
printf("The array 1 is : \n");
for ( i = 0; i <m; i++)
{
    for ( j = 0; j < n; j++)
    {
        printf("%d \t",arr1[i][j]);//printing values to array1
    }
    printf("\n");
}
printf("Enter the values of arr2 :");
for ( i = 0; i <p; i++)
{
    for ( j=0; j< q; j++)
    {
        scanf("%d",&arr2[i][j]);//Intialising values to array22
    }
}
printf("The array 2 is : \n");
for ( i = 0; i <p; i++)
{
    for ( j = 0; j < q; j++)
    {
        printf("%d \t",arr2[i][j]);//printing values to array2
    }
    printf("\n");
}
printf("1.Add 2.sub 3.Multiply 4.divide 5.transpose of arr2 6.transpose of arr1 \n");
int ch;
printf("Enter a choice :\n");
scanf("%d",&ch);
switch (ch)
{
case 1:if (n!=m)
{
    printf("check no.of rows in array1 is equal to no.of columns in array2 ");
    exit(0);
}
int arr3[10][10];
    for ( i = 0; i <m; i++)
{
    for ( j=0; j< n; j++)
    {
        arr3[i][j]=arr1[i][j]+arr2[i][j];//Adding the values 
    }
}
printf("The sum of matrix is : \n");
for ( i = 0; i <m; i++)
{
    for ( j = 0; j < n; j++)
    {
        printf("%d \t",arr3[i][j]);//printing sum of 2 matrixes
    }
    printf("\n");
}

    break;
case 2:if (n!=m)
{
    printf("check no.of rows in array1 is equal to no.of columns in array2 ");
    exit(0);
}
int arr4[10][10];
    for ( i = 0; i <m; i++)
{
    for ( j=0; j< n; j++)
    {
        arr4[i][j]=arr1[i][j]-arr2[i][j];//subtracting the values 
    }
}
printf("The difference of matrix is : \n");
for ( i = 0; i <m; i++)
{
    for ( j = 0; j < n; j++)
    {
        printf("%d \t",arr4[i][j]);//printing sum of 2 matrixes
    }
    printf("\n");
}
break;

case 3:if (n!=m)
{
    printf("check no.of rows in array1 is equal to no.of columns in array2 ");
    exit(0);
}
int arr5[10][10];
    for ( i = 0; i <m; i++)
{
    for ( j=0; j< n; j++)
    {
        arr5[10][10]=0;
        for ( k = 0; k < n; k++)
        {
        arr5[i][j]=arr5[i][j]+arr1[i][k]*arr2[k][j];//Multiplying the matrices
        }
    }
}
printf("The product of matrix is : \n");
for ( i = 0; i <m; i++)
{
    for ( j = 0; j < n; j++)
    {
        printf("%d \t",arr5[i][j]);//printing product of 2 matrixes
    }
    printf("\n");
}
break;

case 4:if (n!=m)
{
    printf("check no.of rows in array1 is equal to no.of columns in array2 ");
    exit(0);
}
int arr6[10][10];
    for ( i = 0; i <m; i++)
{
    for ( j=0; j< n; j++)
    {
        arr6[i][j]=arr1[i][j]/arr2[i][j];//dividing the values 
    }
}
printf("The quotient of matrix is : \n");
for ( i = 0; i <m; i++)
{
    for ( j = 0; j < n; j++)
    {
        printf("%d \t",arr6[i][j]);//printing quotient of matrix
    }
    printf("\n");
}
break;
case 5:
printf("The transpose of arr2 is : \n");
for ( i = 0; i <q; i++)
{
    for ( j = 0; j < p; j++)
    {
        printf("%d \t",arr2[j][i]);//printing transpose of arr2
    }
    printf("\n");
}
break;

case 6:
printf("The transpose of arr1 is : \n");
for ( i = 0; i <n; i++)
{
    for ( j = 0; j < m; j++)
    {
        printf("%d \t",arr1[j][i]);//printing transpose arr2
    }
    printf("\n");
}
break; 

default:
printf("choose correct option \n");
    break;
}
}