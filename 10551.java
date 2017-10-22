import java.math.BigInteger;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String str;
        int radix;
        BigInteger a,b;
        while(input.hasNext())
        {
           radix=input.nextInt();
           if(radix==0)break;
           str=input.next();
           a=new BigInteger(str,radix);
           str=input.next();
           b=new BigInteger(str,radix);
           String x=a.mod(b).toString(radix);
           System.out.println(x);
        }
    }
    
}
