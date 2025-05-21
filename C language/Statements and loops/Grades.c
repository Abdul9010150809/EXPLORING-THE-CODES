#include<stdio.h>
int main(){
    int s1,s2,s3,s4,s5,total,ag;//declaring 7 variables
    printf("Enter marks of 5 subjects :");
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);//Intialising values of each subject
total=s1+s2+s3+s4+s5;//calculating the total
printf("Total marks =%d \n",total);//printing total marks
ag=total/5;
printf("aggregate = %d \n",ag);//printing aggregate
if(ag>=90)//Checking the condition and printing the statement
printf("Grade : Excellent \n");
else if(ag>=80)//Checking the condition and printing the statement
printf("Grade : Above average \n");
else if(ag>=70)//Checking the condition and printing the statement
printf("Grade : Average \n");
else if(ag>=60)//Checking the condition and printing the statement
printf("Grade : Good \n");
else//Checking all the above conditions fails then printing the statement
printf("Grade : fail \n");
}