import java.util.*;
import java.math.*;
class Main{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int ca=sc.nextInt();
        while(ca-->0)
        {
            BigInteger p = sc.nextBigInteger();
            String ch = sc.next(); 
            BigInteger q = sc.nextBigInteger();
            BigInteger gcd_pq = p.gcd(q); // wow :)
            System.out.println(p.divide(gcd_pq) + " / " + q.divide(gcd_pq));
        }
    }
};
