import java.util.*;
class Perso{
    String name;
    int age;
    void ReadPersondetails(){
        Scanner s =new Scanner(System.in);
        System.out.println("Enter name :");
        name=s.next();
        System.out.println("Enter age :");
        age=s.nextInt();
    }
}
class Studen extends Perso{
    String ID;
    int marks;
    void ReadStudentdetails(){
        Scanner s =new Scanner(System.in);
        System.out.println("Enter ID :");
        ID=s.next();
        System.out.println("Enter marks :");
        marks=s.nextInt();
    }
    void Studentdisplay(){
        System.out.println("The datails are ");
        System.out.println("The name is "+name);
        System.out.println("The age is "+age);
        System.out.println("The marks is "+marks);
        System.out.println("The ID is "+ID);
    }
}
class Employee extends Perso{
    String ID;
    int salary;
    void ReadEmployeedetails(){
        Scanner s =new Scanner(System.in);
        System.out.println("Enter Employee ID :");
        ID=s.next();
        System.out.println("Enter salary :");
        salary=s.nextInt();
    }
    void Employeedisplay(){
        System.out.println("The datails of Employee are ");
        System.out.println("The name is "+name);
        System.out.println("The age is "+age);
        System.out.println("The salary is "+salary);
        System.out.println("The employee ID is "+ID);
    }
}
@SuppressWarnings("unused")
class Test25{
    public static void main(String args[]){
        Studen s =new Studen ();
        s.ReadPersondetails();
        s.ReadStudentdetails();
        s.Studentdisplay();
        Employee e =new Employee();
        e.ReadPersondetails();
        e.ReadEmployeedetails();
        e.Employeedisplay();
    }
}