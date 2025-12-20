//Different methods calling
import java.util.*;
class Test8d {
public static void main(String args[]){
//With parameter with return

Test8c t1=new Test8c();
int a,b,c;
System.out.println("Enter two numbers :");
Scanner s=new Scanner (System.in);
a=s.nextInt();
b=s.nextInt();
c=s.nextInt();
int s1=t1.add(a,b,c);
System.out.println(s1);
//With parameter without return

int d,e;
System.out.println("Enter two numbers :");
//Scanner s=new Scanner (System.in);
d=s.nextInt();
e=s.nextInt();
Test8c t2=new Test8c();
t2.sub(d,e);

//Without parameter with return

Test8c t3=new Test8c();
int f=t3.mul();
System.out.println(f);

//Without parameter without return

Test8c t=new Test8c();
t.add();
}
}


