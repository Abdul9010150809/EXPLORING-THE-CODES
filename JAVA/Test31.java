class A{
    int a=10;
    static int b=20;
    final int c=12;
    void display(){
        a++;
        b++;
        //c++;
        System.out.print("A value is "+a);
        System.out.print("B value is "+b);
        System.out.print("C value is "+c);
        System.err.println();
    }
}
class B extends A{
    @Override
    void display(){
        System.out.println("Inherited");
    }
}
class Test31{
    public static void main(String[] args) {
        A a1 =new B();
        a1.display();
        A a2 =new A();
        a2.display();
        A a3 =new A();
        a3.display();
    }
}