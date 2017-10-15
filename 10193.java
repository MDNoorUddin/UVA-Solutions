import java.util.*;
import java.math.*;
public class Main{
    static int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }
    public static void main(String args[]){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        int I=1;
        while(n-->0)
        {
            int a=Integer.parseInt(in.next(), 2);
            int b=Integer.parseInt(in.next(), 2);
            a=gcd(a,b);
            if(a==1)
                System.out.printf("Pair #%d: Love is not all you need!\n",I++);
            else
                System.out.printf("Pair #%d: All you need is love!\n",I++);
        }
  }
}
