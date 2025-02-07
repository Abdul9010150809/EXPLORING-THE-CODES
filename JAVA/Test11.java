import java.lang.*;
class Test11{
    public static void main(String[] args) {
        System.out.println("StringBuffers");
        StringBuffer s=new StringBuffer("Hello Ayub ");
        System.out.println("Length ="+s.length());
        System.out.println("Append ="+s.append("How are u"));
        System.out.println("Replace ="+s.replace(1, 5, "i"));
        System.out.println("Delete ="+s.delete(0, 5));
        System.out.println("Reverse ="+s.reverse());
        System.out.println("Character at ="+s.charAt(4));
        System.out.println("Index = "+s.indexOf("b"));
    }
}