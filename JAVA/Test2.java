import java.util.*;
class Test2{
public static void main(String args[]){
String name;
int age;
float cgpa;
long phno;
Scanner Sc=new Scanner(System.in);
System.out.println("Enter student details :");
System.out.println("Enter student name :");
name=Sc.nextLine();
System.out.println("Enter student age :");
age=Sc.nextInt();
System.out.println("Enter student cgpa :");
cgpa=Sc.nextFloat();
System.out.println("Enter student phone number :");
phno=Sc.nextLong();
System.out.println("The student details are :");
System.out.println("Name is :"+name);
System.out.println("Age is :"+age);
System.out.println("Cgpa is :"+cgpa);
System.out.println("Phone number is :"+phno);
//In a single line
System.out.print("name is :"+name +"\n Age is:"+age +"\n CGPA is:"+cgpa +"\n Phone number is:"+phno);
}
}
