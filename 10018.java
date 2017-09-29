
import java.io.File;
import java.util.*;
import java.math.*;

    class Main{

    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int t;
        t=sc.nextInt();
        while(t-->0){
            BigInteger a=sc.nextBigInteger();
            int count=0;
            while(true)
            {
                count++;
                String x=a+"";
                String y="";
                for(int j=0,i=x.length()-1;i>=0;j++,i--)
                {
                    y=y+x.charAt(i);
                }
                a=a.add(new BigInteger(y));
                x="";
                x=x+a;
                char [] X=x.toCharArray();
                if(x.equals(new StringBuilder(x).reverse().toString())) // is a palindrome
                {
                    System.out.println(count+" "+x);
                    break;
                }
            }
        }
   }
}
