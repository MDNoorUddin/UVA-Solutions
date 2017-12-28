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
        long p,a;
        while(input.hasNext()){
        p=input.nextLong();
        a=input.nextLong();
        if(p==0)break;
        if(isPrime(p)==true)
        {
            System.out.printf("no\n");
        }
        else
        {
            BigInteger A=BigInteger.valueOf(a);
            A=A.modPow(BigInteger.valueOf(p),BigInteger.valueOf(p));
            if(BigInteger.valueOf(a).equals(A)==true)
            {
                System.out.print("yes\n");
            }
            else
                System.out.print("no\n");
        }
      }
    }
}
