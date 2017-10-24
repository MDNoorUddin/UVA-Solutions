package javaapplication3;
import java.math.*;
import java.util.Arrays;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        BigInteger fact[]=new BigInteger[101];
        fact[0]=BigInteger.ONE;
        for(int i=1;i<=100;i++)
        {
           fact[i]=fact[i-1].multiply(BigInteger.valueOf(i));
        }
        BigInteger a,b,c;
        int n,m;
        while(input.hasNext())
        {
            n=input.nextInt();
            m=input.nextInt();
            if(n==0&&m==0)break;
            a=fact[n];
            b=fact[m];
            c=fact[n-m];
            a=a.divide(b.multiply(c));
            System.out.printf("%d things taken %d at a time is %d exactly.\n",n,m,a);
        }
    }
}
