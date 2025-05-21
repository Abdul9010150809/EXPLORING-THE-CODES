import java.util.*;
class Persons{
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
class Students extends Persons{
    String ID;
    int mark1,mark2,total;
    void ReadStudentdetails(){
        Scanner s =new Scanner(System.in);
        System.out.println("Enter ID :");
        ID=s.next();
        System.out.println("Enter mark1 :");
        mark1=s.nextInt();
        System.out.println("Enter mark2 :");
        mark2=s.nextInt();
        total=(mark1)+(mark2);
    }
}
@SuppressWarnings("unused")
class Result extends Students{
    void Studentdisplay(){
        System.out.println("The datails are ");
        System.out.println("The name is "+name);
        System.out.println("The age is "+age);
        System.out.println("The ID is "+ID);
        System.out.println("The total marks is "+total);
        int avg;
        avg=total/2;
        System.out.println("The average is "+avg);
    }
}
@SuppressWarnings("unused")
class Test24{
    public static void main(String args[]){
        Result s =new Result ();
        s.ReadPersondetails();
        s.ReadStudentdetails();
        s.Studentdisplay();
    }
}