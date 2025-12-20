//Random number
import java.util.Random;
class Test14 {
    public static void main(String[] args){
        Random random = new Random();
        System.out.println(random.nextBoolean());
        System.out.println(random.nextDouble());
        System.out.println(random.nextInt());
        System.out.println(random.nextFloat());
        System.out.println(random.nextInt(30));
        System.out.println(random.nextInt(1000, 2000));
        System.out.println(random.nextFloat());
        //P1
        Random a = new Random();
        int m=a.nextInt();
        System.out.println("m ="+m);
        int n=a.nextInt();
        System.out.println("n ="+n);
        if(m<n){
            System.out.println("Min value ="+n);
        }
        else{
            System.out.println("Max value ="+m);
        }
    }
}
