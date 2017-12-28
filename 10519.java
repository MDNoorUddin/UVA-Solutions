import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.PrintStream;
import java.math.*;
import java.util.Arrays;
import java.util.Scanner;
public class Main {
    public static boolean isPrime(long n)
    {
        if(n==2)return true;
        if(n%2==0)return false;
        if(n==3)return true;
        for(int i=3;i<=Math.sqrt(n);i++)
        {
            if(n%i==0)return false;
        }
        return true;
    }
    public static void main(String[] args) throws FileNotFoundException {
        //PrintStream out = new PrintStream(new FileOutputStream("output.txt"));
        //System.setOut(out);
        Scanner input=new Scanner(System.in);
        BigInteger p;
        while(input.hasNext()){
            p=input.nextBigInteger();
            if(p.equals(BigInteger.ZERO))
            {
                System.out.printf("1\n");continue;
            }
            p=p.subtract(BigInteger.ONE);
            BigInteger r=p.pow(2);
            r=r.add(p.add(BigInteger.valueOf(2)));
            System.out.printf("%d\n",r);
      }
    }
}
