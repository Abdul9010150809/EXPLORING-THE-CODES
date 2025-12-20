//String Tokenizer
import java.util.StringTokenizer;
class Test13 {
    public static void main(String[] args) {
        StringTokenizer st =new StringTokenizer("Assalamu alaikum Ayub How are u");
        while (st.hasMoreElements()) {
            System.out.println("Tokens are :"+st.nextToken());
        }
        String a=":";
        String b="Hello : Ayub : How : are : u";
        StringTokenizer s =new StringTokenizer(b,a);
        int count= s.countTokens();
        for (int i=0;i <count;i++){
            System.out.println("Token [" + i + "] :"+s.nextToken());
        }
        StringTokenizer d=null;
        while (s.hasMoreElements()) {
            System.out.println("Tokens are :"+d.nextToken());
        }
        StringTokenizer str =new StringTokenizer("Assalamu:alaikum:Ayub:How:are:u");
        while (str.hasMoreElements()) {
            System.out.println("Tokens are :"+str.nextToken());
        }
    }
}