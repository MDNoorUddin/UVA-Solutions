package uva;
import java.util.*;
import java.math.*;
public class Uva{
    public static void main(String args[]){
        Scanner in=new Scanner(System.in);
        int t=in.nextInt();
        BigInteger a;
        int n;
        while(t-->0)
        {
            a=in.nextBigInteger();
            n=in.nextInt();
            int x;
            boolean sp=true;
            for(int i=0;i<n;i++)
            {
                x=in.nextInt();
                if(sp==true)
                {
                    if(a.mod(BigInteger.valueOf(x)).compareTo(BigInteger.valueOf(0))!=0)
                    {
                        sp=false;
                    }
                }
            }
            if(sp)
                System.out.println(a+" - Wonderful.");
            else
                System.out.println(a+" - Simple.");
        }
  }
}
