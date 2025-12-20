import java.util.*;
class Person{
    String name;
    String dept="CSE";
    int age;
    void ReadPersondetails(){
        Scanner s =new Scanner(System.in);
        System.out.println("Enter name :");
        name=s.next();
        System.out.println("Enter age :");
        age=s.nextInt();
    }
    Person(String name) {
        this.name=name;
    }
}
class Student extends Person{
    String ID;
    int marks;

    public Student() {
        super("Abdul");
    }
    
    void ReadStudentdetails(){
        super.ReadPersondetails();
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
        System.out.println("The dept is "+dept);
    }
}
@SuppressWarnings("unused")
class Test23{
    public static void main(String args[]){
        Student s =new Student ();
       // s.ReadPersondetails();
        s.ReadStudentdetails();
        s.Studentdisplay();
    }
}