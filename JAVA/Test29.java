//Abstract class
abstract class Animal{
    @SuppressWarnings("unused")
    abstract void makesound();
    void sleep(){
        System.out.println("Animal is spleeping");
    }
}
class Dog extends Animal{
    @SuppressWarnings("override")
    void makesound(){
        System.out.println("Barking " );
    }
}
@SuppressWarnings("unused")
class Test29{
    public static void main(String[] args) {
        Dog mydog =new Dog();
        mydog.makesound();
        mydog.sleep();
    }
}