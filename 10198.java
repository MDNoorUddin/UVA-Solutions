import java.math.*;
import java.util.Arrays;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        BigInteger fact[] =new BigInteger[1001];
        fact[0]=BigInteger.ONE;
        fact[1]=BigInteger.valueOf(2);
        fact[2]=BigInteger.valueOf(5);
        fact[3]=BigInteger.valueOf(13);
        for(int i=4;i<=1000;i++)
        {
            fact[i]=fact[i-3].add(fact[i-2]).add(fact[i-1].multiply(BigInteger.valueOf(2)));
        }
        Scanner sc=new Scanner(System.in);
        while(sc.hasNext()){
        int n=sc.nextInt();
        System.out.println(fact[n]);
        }
    }
}
