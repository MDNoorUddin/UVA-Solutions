//package Main;
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
        int n;
        while(input.hasNext()){
        n=input.nextInt();
        if(n==0)break;
        if(isPrime(n)==true)
        {
            System.out.printf("%d is normal.\n",n);
        }
        else{
        BigInteger b=BigInteger.valueOf(n);
        BigInteger l=BigInteger.valueOf(2);
        BigInteger fl=l.modPow(b, b);
        if(fl.equals(l)==true)
        {
            l=BigInteger.valueOf(3);
            fl=l.modPow(b, b);
            if(fl.equals(l)==true)
            {
                l=BigInteger.valueOf(5);
                fl=l.modPow(b, b);
                if(fl.equals(l)==true)
                {
                   System.out.printf("The number %d is a Carmichael number.\n",n); 
                }
                else
                {
                  System.out.printf("%d is normal.\n",n);  
                }
            }
            
            else
                System.out.printf("%d is normal.\n",n);
        }
        else
        {
            System.out.printf("%d is normal.\n",n);
        }
        }
    }
    }
}
