class A{
    void show(){
        System.out.println("Hello A");
    }
}
@SuppressWarnings("unused")
class B extends A{
    @Override
    void show(){
        System.out.println("Hello B");
    }
}
class C extends B{
    @Override
    void show(){
        System.out.println("Hello C");
    }
}
@SuppressWarnings("unused")
class Test27{
    public static void main(String[] args) {
    A obj =new A();
    obj.show();
    obj =new B();
    obj.show();
    obj =new C();
    obj.show();
    }
}