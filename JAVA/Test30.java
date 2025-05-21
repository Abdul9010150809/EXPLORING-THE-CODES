//Abstract class
abstract class Animals{
    @SuppressWarnings("unused")
    String name;
    Animals(String name){
        this.name=name;
        System.out.println("Animal created "+name);
    }
    @SuppressWarnings("unused")
    abstract void makesound();
    void sleep(){
        System.out.println("Animal is sleeping");
    }
}
class Dogs extends Animals{
    @SuppressWarnings("override")
    Dogs(String name){
        super(name);
    }
    @Override
    void makesound(){
        System.out.println("Barking " );
    }
}
@SuppressWarnings("unused")
class Test30{
    public static void main(String[] args) {
        Dogs mydog =new Dogs("Tommy");
        mydog.makesound();
        mydog.sleep();
    }
}