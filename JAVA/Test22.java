import java.lang.*;
class Test22 {
public static void main(String[] args) {
    int x=100;
    @SuppressWarnings({"unused", "BoxedPrimitiveConstruction"})
    Integer s1 = new Integer(x);
    Integer s2=Integer.valueOf(x);
Integer s3=x;
System.out.println(s1+" "+s2+""+s3);
}
}