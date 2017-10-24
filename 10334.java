import java.math.*;
import java.util.Arrays;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        BigInteger fib[]=new BigInteger[1001];
        fib[0]=BigInteger.ONE;
        fib[1]=BigInteger.valueOf(2);
        for(int i=2;i<=1000;i++)
        {
           fib[i]=fib[i-1].add(fib[i-2]);
        }
        int n;
        while(input.hasNext())
        {
            n=input.nextInt();
            System.out.println(fib[n]);
        }
    }
}
