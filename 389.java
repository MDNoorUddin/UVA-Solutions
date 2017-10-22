import java.math.BigInteger;
import java.util.Scanner;
public class JavaApplication3 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String str;
        int radix1,radix2;
        BigInteger a;
        while(input.hasNext())
        {
           str=input.next();
           radix1=input.nextInt();
           radix2=input.nextInt();
           a=new BigInteger(str,radix1);
           str=a.toString(radix2);
           if(str.length()>7)
               System.out.println("  ERROR");
           else
           {
               System.out.printf("%7S\n",str);
           }
        }
    }
    
}
