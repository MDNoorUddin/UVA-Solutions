package javaapplication3;
import java.math.*;
import java.util.Arrays;
import java.util.Scanner;
public class JavaApplication3 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        BigInteger a;
        BigInteger b;
        boolean f=false;
        while(input.hasNext())
        {
            int count=0;
            a=input.nextBigInteger();
            if(a.equals(BigInteger.ZERO)==true)break;
            if(f==true)System.out.println();
            f=true;
            if(a.compareTo(BigInteger.valueOf(2148))<0)
            {
                System.out.println(a);
                System.out.println("No ghost will come in this year");
                
            continue;
            }
            b=a;
            
            
            a=a.subtract(BigInteger.valueOf(2148));
            System.out.println(b);
            if(a.mod(BigInteger.valueOf(2)).equals(BigInteger.ZERO)==true){
                System.out.println("Ghost of Tanveer Ahsan!!!");
                count++;
            }
            if(a.mod(BigInteger.valueOf(5)).equals(BigInteger.ZERO)==true){
                System.out.println("Ghost of Shahriar Manzoor!!!");
                count++;
            }
            if(a.mod(BigInteger.valueOf(7)).equals(BigInteger.ZERO)==true){
                System.out.println("Ghost of Adrian Kugel!!!");
                count++;
            }
            if(a.mod(BigInteger.valueOf(11)).equals(BigInteger.ZERO)==true){
                System.out.println("Ghost of Anton Maydell!!!");
                count++;
            }
            if(a.mod(BigInteger.valueOf(15)).equals(BigInteger.ZERO)==true){
                System.out.println("Ghost of Derek Kisman!!!");
                count++;
            }
            if(a.mod(BigInteger.valueOf(20)).equals(BigInteger.ZERO)==true){
                System.out.println("Ghost of Rezaul Alam Chowdhury!!!");
                count++;
            }
            if(a.mod(BigInteger.valueOf(28)).equals(BigInteger.ZERO)==true){
                System.out.println("Ghost of Jimmy Mardell!!!");
                count++;
            }
            if(a.mod(BigInteger.valueOf(36)).equals(BigInteger.ZERO)==true){
                System.out.println("Ghost of Monirul Hasan!!!");
                count++;
            }
            if((b.mod(BigInteger.valueOf(4)).equals(BigInteger.ZERO)==true&&b.mod(BigInteger.valueOf(100)).equals(BigInteger.ZERO)==false)||
                    b.mod(BigInteger.valueOf(400)).equals(BigInteger.ZERO)==true){
                System.out.println("Ghost of K. M. Iftekhar!!!");
                count++;
            }
            if(count==0)
                System.out.println("No ghost will come in this year");
            //System.out.println();
        }
    }
}
