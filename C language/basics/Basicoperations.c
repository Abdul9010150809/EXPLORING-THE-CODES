#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter the values of a,b,c,d =");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    //Performing basic mathematical operations is called arthematic operations
    printf("Arthematic operations");
    printf("%d + %d =%d \n",a,b,a+b); //addition of a and b
    printf("%d - %d =%d \n",a,b,a-b); // difference of a and b
    printf("%d * %d =%d \n",a,b,a*b);  //Multiplication of values of a and b
printf("%d / %d =%d \n",a,b,a/b);  //Division of values of a and b
printf("%d mod %d =%d \n",a,b,a%b); //Leaving the remainder when a is divided by b
printf("Unary operators \n");
printf("The unary minus %d=%d \n",a,-a);//adding minus sign to the value of a
printf("The pre increment of %d =%d \n",a,++a); //Incrementing the value of a
printf("The pre decrement of %d =%d \n",b,--b); //decrementing the value of b
printf("The post increment of %d =%d \n",a,a++);//later incrementing the value of a
printf("The post decrement of %d =%d \n",b,b--);//later decrementing the value of b
printf("Relational operators \n");//Comparing the values of a and b
printf("%d > %d =%d \n",a,b,a>b);//Checking whether a is greater than b
printf("%d < %d =%d \n",a,b,a<b);//Checking whether a is lesser than b
printf("%d >= %d =%d \n",a,b,a>=b);//Checking whether a is greater than or equal to b
printf("%d <= %d =%d \n",a,b,a<=b);//Checking whether a is greater than or equal to b
printf("%d==%d =%d \n",a,b,a==b);//Checking whether a is equal to b
printf("%d != %d =%d",a,b,a!=b);//Checking whether a is not equal to b
printf("\n Logical operators \n");
printf("%d > %d ||  %d >%d =%d \n",a,b,c,d,(a>b)||(c>a));//Checking any one of the  condition is true or not 
printf("%d > %d &&  %d >%d =%d \n",a,b,c,a,(a>b) && (c>a));//Checking both conditions are true or not
printf("!(%d > %d) =%d \n",a,b,!(a>b));//Giving The negative based on the result of condition
printf("Bitwise operators \n");
printf("%d & %d =%d \n",a,b,a&b);//Using Bitwise add 
printf("%d | %d =%d \n",a,b,a|b);//Using Bitwise or
printf("%d^%d =%d \n",a,b,a^b);//Using Bitwise not
printf("1<< %d =%d \n",a,1<<a);//Using left shift
printf("%d<<1 =%d \n",a,a<<1);//using right shift
printf("Conditional operators ");
int big,i,j,k,l;
big=a>b ? a:b;printf(" %d is big ",big);//Single statement and checking the condition
printf("\n Comma operators ");
i=a++,j=(a++,a++,++a);//Usage of comma varies the answer
printf("\n i=%d \t j=%d",i,j);
k=a++,l=a++,a++,++a;
printf("\n without comma i=%d \t j=%d",k,l);
printf("\n Size of operators \n ");
//It gives the size of the data types
printf("char occupies %d bytes \n",sizeof(char));
printf("float occupies %d bytes \n",sizeof(float));
printf("int occupies %d bytes \n",sizeof(int));
printf("double occupies %d bytes \n",sizeof(double));
printf("long double occupies %d bytes \n",sizeof(long double));
printf("signed int occupies %d bytes \n",sizeof(signed int));
printf("unsigned int occupies %d bytes \n",sizeof(unsigned int));
}
