package javaapplication3;
import java.math.BigInteger;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String str,operation,binary1,binary2;
        int radix;
        BigInteger a,b;
        int t=input.nextInt();
        while(t-->0)
        {
            str=input.next();
            a=new BigInteger(str,16);
            //System.out.println(a);
            str=input.next();
            operation=str;
            str=input.next();
            b=new BigInteger(str,16);
            binary1=a.toString(2);
            binary2=b.toString(2);
            if(operation.equals("+"))
            {
                for(int i=1;i<=13-binary1.length();i++)
                System.out.print(0);
                System.out.print(binary1+" + ");
                for(int i=1;i<=13-binary2.length();i++)
                System.out.print(0);
                System.out.print(binary2+" = ");
                System.out.println(a.add(b));
            }
            else
            {
                for(int i=1;i<=13-binary1.length();i++)
                System.out.print(0);
                System.out.print(binary1+" - ");
                for(int i=1;i<=13-binary2.length();i++)
                System.out.print(0);
                System.out.print(binary2+" = ");
                System.out.println(a.subtract(b));
            }
        }
    }
    
}
