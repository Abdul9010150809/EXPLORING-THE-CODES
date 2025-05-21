//String methods
class Test10 {
    public static void main(String[] args) {
        String s1=" Hello Ayub ";
        String s2="hello Ayub";
        System.out.println("Length of s1 ="+s1.length());
        System.out.println("Upper to lower"+s1.toUpperCase());
        System.out.println("Lower to upper ="+s1.toLowerCase());
        System.out.println("Equals to ="+s1.equals(s2));
        System.out.println("Equals ignore case ="+s1.equalsIgnoreCase(s2));
        System.out.println("Index of ="+s1.indexOf(' '));
        System.out.println("Index of ="+s1.indexOf(' ',6));
        System.out.println("Char at 5 "+s1.charAt(5));
        System.out.println("Compare ="+s1.compareTo(s2));
        System.out.println("Substring ="+s1.substring(4));
        System.out.println("Substring b/w="+s1.substring(4,9));
        String s3=s1.trim();
        System.out.println("Length of s3 ="+s3.length());
    }
}