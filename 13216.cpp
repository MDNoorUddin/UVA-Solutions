import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.PrintStream;
import java.math.*;
import java.util.Arrays;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws FileNotFoundException {
        //PrintStream out = new PrintStream(new FileOutputStream("output.txt"));
        //System.setOut(out);
        Scanner input=new Scanner(System.in);
        int t=input.nextInt();
        BigInteger n;
        //int n;
        while(t-->0)
        {
            n=input.nextBigInteger();
            if(n.equals(BigInteger.ZERO))System.out.println(1);
            else if(n.equals(BigInteger.ONE))System.out.println(66);
            else if(n.equals(BigInteger.valueOf(2)))System.out.println(56);
            else if(n.equals(BigInteger.valueOf(3)))System.out.println(96);
            else if(n.equals(BigInteger.valueOf(4)))System.out.println(36);
            else if((n.mod(BigInteger.valueOf(5)).equals(BigInteger.ZERO))==true)
                    System.out.println(76);
            else
            {
                if((n.mod(BigInteger.valueOf(5)).equals(BigInteger.ONE))==true)
                    System.out.println(16);
                else if((n.mod(BigInteger.valueOf(5)).equals(BigInteger.valueOf(2)))==true)
                {
                    System.out.println(56);
                }
                else if((n.mod(BigInteger.valueOf(5)).equals(BigInteger.valueOf(3)))==true)
                {
                    System.out.println(96);
                }
                else
                {
                    System.out.println(36);
                }
            }
      }
    }
}
