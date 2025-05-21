class St{
    public String name;
    public int age;
    public St(String name, int age){
        this.name=name;
        this.age=age;
    }
    @SuppressWarnings("override")
    public String toString(){
        return "Name is "+name+"age is "+age;
    }
}
class Employee{
    String id;
    int marks;
    Employee(String id,int marks){
        this.id=id;
        this.marks=marks;
    }
    @SuppressWarnings("override")
    public String toString(){
        return "Id is "+id+"marks is "+marks;
    }
}
@SuppressWarnings("unused")
class Test21{
    public static void main(String[] args) {
        Employee E = new Employee("A123",90);
        St S =new St ("Ayub ",18);
        //Object o[]={E,S};
        System.out.println(E + " "+S);
        
    }
}
