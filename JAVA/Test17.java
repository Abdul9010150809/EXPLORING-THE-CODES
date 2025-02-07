class demo {
    public int a=10;
    public void display(){
        System.out.println("a ="+a);
    }
}
public class Test17{
    public static void main(String[] args) {
    demo b =new demo();
    b.display();
    System.out.println("a = "+b.a);
        }
}