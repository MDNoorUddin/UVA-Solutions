import java.util.*;
import java.math.*
public class Uva {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        while(sc.hasNext()){
        BigInteger num=sc.nextBigInteger();
        int j=num.intValue();
        BigInteger a=BigInteger.ZERO;
        BigInteger b=BigInteger.ONE;
        for(int i=2;i<=j;i++)
        {
            BigInteger c=BigInteger.ZERO;
            c=a.add(b);
            a=b;
            b=c;
        }
        if(j!=0)
        System.out.printf("The Fibonacci number for %d is %s\n", j, b.toString());
        else System.out.println("The Fibonacci number for "+j+" is 0");
        }
    }
    
}
