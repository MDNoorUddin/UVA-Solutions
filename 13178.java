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
        int n;
        while(t-->0)
        {
            n=input.nextInt();
            BigInteger x=BigInteger.valueOf(n);
            BigInteger y=x.add(BigInteger.ONE);
            x=x.multiply(y);
            x=x.divide(BigInteger.valueOf(2));
            if(x.mod(BigInteger.valueOf(3)).equals(BigInteger.ZERO)==true)
                    {
                       System.out.println("YES");
                    }
            else
            {
                System.out.println("NO");
            }
        }
    }
}
