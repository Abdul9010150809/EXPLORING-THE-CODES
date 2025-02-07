class Test16 {
    public static void main(String args[]) {
        
        for (int i = 0; i < args.length; i++) {
            
            if(a > b){
                b = a;
                a = b;
                System.err.println(a+b);
            }
        }
    }
}