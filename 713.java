import java.util.*;
import java.math.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t;
        t=sc.nextInt();
        while(t-->0)
        {
            BigInteger a=sc.nextBigInteger();
            BigInteger b=sc.nextBigInteger();
            BigInteger x=BigInteger.ZERO;
            BigInteger y=BigInteger.ZERO;
            BigInteger temp,i=BigInteger.ONE;
            String B=""+a;
            StringBuffer s=new StringBuffer(B);
            StringBuffer c=s.reverse();
            String d=c.toString();
            x=new BigInteger(d);
             B=""+b;
             s=new StringBuffer(B);
             c=s.reverse();
             d=c.toString();
             y=new BigInteger(d);
             x=x.add(y);
             B=""+x;
             s=new StringBuffer(B);
             c=s.reverse();
             d=c.toString();
             y=new BigInteger(d);
             System.out.println(y);
        }
    }
    
}
