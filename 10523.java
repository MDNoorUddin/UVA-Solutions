import java.util.*;
import java.math.*;
public class Main{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        BigInteger a=BigInteger.ZERO;
        BigInteger b=BigInteger.ZERO;
        while(sc.hasNext())
        {
            a=sc.nextBigInteger();
            b=sc.nextBigInteger();
            BigInteger x=BigInteger.ZERO;
            BigInteger A=BigInteger.ZERO;
            for(int i=1;i<=a.intValue();i++)
            {
                //System.out.println("i "+i);
                A=b.pow(i);
                A=A.multiply(BigInteger.valueOf(i));
                //System.out.println("b "+A);
                x=x.add(A);
            }
            System.out.println(x);
        }
    }
}
