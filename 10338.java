package javaapplication3;
import java.math.*;
import java.util.Arrays;
import java.util.Scanner;
public class JavaApplication3 {
    public static void main(String[] args) {
        BigInteger fact[] =new BigInteger[21];
        fact[0]=BigInteger.ONE;
        fact[1]=BigInteger.ONE;
        for(int i=2;i<=20;i++)
        {
            fact[i]=BigInteger.valueOf(i).multiply(fact[i-1]);
        }
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        String str;
        int I=1;
        while(n-->0)
        {
            str=sc.next();
            int size=str.length();
            int a[]=new int[20];
            int index=0;
            boolean f[]=new boolean[size];
            for(int i=0;i<size;i++)
                f[i]=true;
            for(int i=0;i<size;i++)
            {
                if(f[i]==true){
                int count=1;
                f[i]=false;
                for(int j=0;j<size;j++)
                {
                    if(i!=j)
                    {
                        if(str.charAt(j)==str.charAt(i)&&f[j]==true)
                        {
                            count++;
                            f[j]=false;
                        }
                    }
                }
                a[index++]=count;
                }
            }
            BigInteger q=BigInteger.ONE;
            for(int i=0;i<index;i++)
            {
                q=q.multiply(fact[a[i]]);
            }
            BigInteger p=fact[size];
            p=p.divide(q);
            System.out.printf("Data set %d: %d\n",I++,p);
        }
    }
}
