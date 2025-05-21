class Calculator{
    int add(int a,int b){
        return a+b;
    }
    @SuppressWarnings("unused")
    int add(int a,int b,int c){
        return a+b+c;
    }
    double add(double a,double b){
        return a+b;
    }
}
public class Test26{
    public static void main(String[] args) {
    Calculator calc =new Calculator();
    System.out.println("int a + b ="+calc.add(2,5));
    System.out.println("int a + b+c ="+calc.add(2,5+6));
    System.out.println("int a + b = "+calc.add(2.42,5.222));
    }
}