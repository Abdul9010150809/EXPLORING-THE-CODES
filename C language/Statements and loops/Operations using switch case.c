#include<stdio.h>
int main(){
    printf("1.add 2.sub 3.mul 4.div 5.mod");
    int a,b,c,ch,res;
    printf("\n Enter the values of 2 numbers :");
    scanf("%d %d",&a,&b);//Taking values of 2 numbers
    printf("enter your choice :");
    scanf("%d",&ch);//taking your choice
    switch (ch)//Moving to that choice number and implementing that case
    {
    case 1:
        res=a+b;
        break;
     case 2:
        res=a-b;
        break;
    case 3:
        res=a*b;
        break;
     case 4:
        res=a/b;
        break;  
     case 5:
        res=a%b;
        break;   
    default:
    printf("Choose correct option");    
    }
printf("result is %d \n",res);
}