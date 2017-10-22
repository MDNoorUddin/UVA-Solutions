import java.math.BigInteger;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String str,copy;
        int radix1,radix2;
        BigInteger a;
        while(input.hasNext())
        {
           radix1=input.nextInt();
           radix2=input.nextInt();
           str=input.next();
           try{
           a=new BigInteger(str,radix1);
           copy=a.toString(radix2);
           System.out.printf("%S base %d = %S base %d\n",str,radix1,copy,radix2);
           }
           catch(Exception o)
           {
               System.out.printf("%S is an illegal base %d number\n",str,radix1);
           }
        }
    }
    
}
