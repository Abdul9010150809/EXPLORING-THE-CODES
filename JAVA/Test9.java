class Test9 {
    int a;
    Test9(){
        System.out.println("HIi");
    }
    Test9(int a){
        System.out.println("It is parametrized constructor");
    }
    void display(){
        System.err.println("a value is "+a);
    }
    Test9(int a,int b){
        int c=a+b;
        System.out.println(c);
    }
    Test9(int c,double d){
        double e=c+d;
        System.out.println(e);
    }

}