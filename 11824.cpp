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
            BigInteger sum=BigInteger.ZERO;
            int [] a=new int[400];
            int i=0;
            while(true)
            {
                n=input.nextInt();
                a[i++]=n;
                if(n==0)break;
            }
            for(int j=0;j<=i;j++)
            {
                int ptr=0;
                while(ptr<=i-j)
                {
                    if(a[ptr]<a[ptr+1])
                            {
                                int temp=a[ptr];
                                a[ptr]=a[ptr+1];
                                a[ptr+1]=temp;
                            }
                    ptr++;
                }
            }
            int k=1;
            BigInteger temp;
            for(int l=0;l<a.length;l++)
            {
                temp=BigInteger.valueOf(a[l]).pow(l+1);
                sum=sum.add(temp.multiply(BigInteger.valueOf(2)));
            }
            if(sum.compareTo(BigInteger.valueOf(5000000))>0)
            {
                System.out.println("Too expensive");
            }
            else
            {
                System.out.printf("%d\n",sum);
            }
        }
    }
}
