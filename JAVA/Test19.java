import java.util.*;
class Sts{
    public String name;
    public int age;
    public Sts(String name, int age){
        this.name=name;
        this.age=age;
    }
}
@SuppressWarnings("unused")
class Test19{
    public static void main(String[] args) {
        Sts s[] =new Sts [2];
        /*s[0] =new Student ("Ayub",18);
        s[1] =new Student ("Ayub basha",18);
        for(int i=0;i<s.length;i++){
            System.out.println("Name is"+s[i].name+" Age is "+s[i].age);
        }*/
        Scanner sc = new Scanner(System.in);
        for (int i=0;i<s.length;i++) {
            String name=sc.next();
            int age=sc.nextInt();
            System.out.println("Name is" + name + " Age is " + age);
        }
        /*for(int i=0;i<s.length;i++){
        System.out.println("Name is"+s[i].name+" Age is "+s[i].age);
        }*/
    }
}