class Student{
    public String name;
    public int age;
    public Student(String name, int age){
        this.name=name;
        this.age=age;
    }
    @SuppressWarnings("override")
    public String toString(){
        return "Name is "+name+"age is "+age;
    }
}
@SuppressWarnings("unused")
class Test20{
    public static void main(String args[]){
        Student s = new Student ("Ayub ",18);
        System.out.println(s);
    }
}