//Conditional statements
import java.util.*;
class Test5{
public static void main(String args[]){
int a=8,fact=5;
//Use of If statement
if(a>3){
fact+=a;}
System.out.println("fact ="+ fact);
//Use of Else statement
if(a>123){
System.out.println("Hi");
}
else {
System.out.println("Hello");
}
//Use of Else-if Statement
if(a>123){
System.out.println("Hi");
}
else if(a<6){
System.out.println("Hello Sir");
}
else if (a>6){
System.out.println("Hello Sir,How are you?");
}
else {
System.out.println("Hello");
}
//Switch statement
int ch;
Scanner ac = new Scanner(System.in);
System.out.println("Enter any number ");
ch=ac.nextInt();
switch(ch) {
	case 1 -> System.out.println("Sunday");
	case 2 -> System.out.println("Monday");
	case 3 -> System.out.println("Tuesday");
		case 4 -> System.out.println("Wednesday");
		default -> System.out.println("thursday");
		}
}
}

