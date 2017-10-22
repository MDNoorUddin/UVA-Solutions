import java.math.*;
import java.util.Arrays;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t;
        t=input.nextInt();
        BigInteger a,b;
        while(t-->0)
        {
            a=input.nextBigInteger();
            b=input.nextBigInteger();
            System.out.println(a.subtract(b));
        }
    }
    
}
