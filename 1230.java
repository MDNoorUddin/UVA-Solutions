import java.util.*;
import java.math.*;
class Main{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int ca;
        while(true){
                ca=sc.nextInt();if(ca==0)break;
                while(ca-->0)
        {
            BigInteger p = sc.nextBigInteger();
            BigInteger q = sc.nextBigInteger();
            BigInteger s=sc.nextBigInteger();
            System.out.println(p.modPow(q,s));
        }
    }
    }
}
