class student{
    private String name;
    private int age;
    public void setName(String name){
        this.name=name;
    }
    public String  getName(){
        return name;
    }
    public void setAge(int age){
        this.age=age;
    }
    public int  getage(){
        return age;
    }
}
@SuppressWarnings("unused")
class Test18 {
    public static void main(String[] args) {
        student s=new student();
        s.setName("Ayub");
        s.setAge(18);
        System.out.println("Name is "+s.getName());
        System.out.println("Age is "+s.getage());
        s.setName("Kottam");
        System.out.println("Name is "+s.getName()+" Age is "+s.getage());
    }
}