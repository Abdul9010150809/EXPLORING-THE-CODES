class Vehicle{
    void rentalcost(){
        System.out.println("Rental cost depends on vehicle type");
    }
}
class Car extends Vehicle{
    @Override
    void rentalcost(){
        System.out.println("Rental cost depends on car type");
    }
}
class Bike extends Vehicle{
    @Override
    void rentalcost(){
        System.out.println("Rental cost depends on bike type");
    }
}
public class Test28{
    public static void main(String[] args) {
        Vehicle v;
        v=new Car();
        v.rentalcost();
        v=new Bike();
        v.rentalcost();
    }
}