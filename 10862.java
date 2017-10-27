import java.math.*;
import java.util.Arrays;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        BigInteger fib[]=new BigInteger[4001];
        
        fib[0]=BigInteger.ZERO;
        fib[1]=BigInteger.ONE;
        fib[2]=BigInteger.valueOf(2);
        for(int i=3;i<=4000;i++)
        {
            fib[i]=fib[i-1].add(fib[i-2]);
        }
        //System.out.println("hai");
        int n;
        while(true)
        {
            n=input.nextInt();
            if(n==0)break;
            n=(n*2)-1;
            System.out.println(fib[n]);
        }
    }
}
