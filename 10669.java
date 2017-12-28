import java.math.*;
import java.util.Arrays;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        BigInteger s[]=new BigInteger[200];
        s[0]=BigInteger.valueOf(1);
        for(int i=1;i<=199;i++)
        {
            s[i]=BigInteger.valueOf(3).pow(i);
        }
        Scanner input=new Scanner(System.in);
        long a;
        while(input.hasNext())
        {
            a=input.nextLong();
            if(a==0)break;
            a--;
            String str=Long.toBinaryString(a);
            int j=str.length()-1;
            int h=0;
            System.out.print("{");
            boolean found=false;
            for(int i=j;i>=0;i--)
            {
                if(str.charAt(i)=='1')
                {
                    if(found==true)System.out.print(",");
                    System.out.printf(" %d",s[h]);
                    found=true;
                }
                h++;
            }
            System.out.print(" }\n");
        }
    }
}
