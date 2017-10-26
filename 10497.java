import java.math.*;
import java.util.Arrays;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        BigInteger fib[]=new BigInteger[801];
        fib[0]=BigInteger.ZERO;
        fib[1]=BigInteger.ZERO;
        for(int i=2;i<=800;i++)
        {
            if(i%2==0)
            {
                fib[i]=(fib[i-1].multiply(BigInteger.valueOf(i)));
                fib[i]=fib[i].add(BigInteger.ONE);
            }
            else
            {
                fib[i]=(fib[i-1].multiply(BigInteger.valueOf(i)));
                fib[i]=fib[i].subtract(BigInteger.ONE);
            }
        }
        int n;
        while(true)
        {
            n=input.nextInt();
            if(n==-1)break;
            System.out.println(fib[n]);
        }
    }
}
