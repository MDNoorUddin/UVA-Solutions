import java.util.*;
import java.math.*;
class Main{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int ca=1;
        while(true)
        {
            int n,f;
            n=sc.nextInt();
            f=sc.nextInt();
            if (n == 0 && f == 0) break;
            BigInteger x=BigInteger.valueOf(0);
            for(int i=0;i<n;i++)
            {
                BigInteger c;
                c=sc.nextBigInteger();
                x=x.add(c);
            }
            BigInteger X=x.divide(BigInteger.valueOf(f));
            System.out.println("Bill #" + (ca++) + " costs " +
            x + ": each friend should pay " + X);
            System.out.println(); // the line above is BigInteger division
        }
    }
};
