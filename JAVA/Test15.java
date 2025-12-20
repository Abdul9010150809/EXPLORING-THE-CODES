//Command line arguments
class Test15 {
    public static void main(String args[]) {
        System.out.println(args[0]+" "+args[1]);
        System.out.println(args[0]+args[1]);
        System.out.println(args[0]+args[2]);
        int a=Integer.parseInt(args[0]);
        float b=Float.parseFloat(args[2]);
        double c=Double.parseDouble(args[1]);
        System.out.println("a + b ="+(a+b));
        System.out.println("a + c ="+(a+c));
        System.out.println("a + b + c ="+(a+b+c));
        for (int i = 0; i < args.length; i++) {
            System.out.println(args[i]);
        }
    }
}