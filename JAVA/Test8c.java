//Inter community in JAVA or different types of methods in java
import java.util.*;
class Test8c{
int sum=0;
int dif=0;
//With parameter with return
public int add(int a,int b,int c)
	{
	sum=a+b+c;
	System.out.println("The sum is ");
	return sum;
	}
//With parameter without return
public void sub(int a,int b)
	{
	dif=a-b;
	System.out.println("The difference is ");
	System.out.println(dif);
	}
//Without parameter with return
int mul(){
int a,b;
System.out.println("Enter two numbers :");
	Scanner s=new Scanner (System.in);
	a=s.nextInt();
	b=s.nextInt();
	int p=a*b;
	System.out.println("The product is ");
	return p;
	}
//Without parameter without return	
public void add(){
	int a,b;
	System.out.println("Enter two numbers :");
	Scanner s=new Scanner (System.in);
	a=s.nextInt();
	b=s.nextInt();
	System.out.println("The quotient is ");
	int c=a/b;
	System.out.println(c);
	}
}
	
