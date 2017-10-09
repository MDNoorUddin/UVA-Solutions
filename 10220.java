
import java.util.*;
import java.math.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        while(sc.hasNext())
        {
            int number=sc.nextInt();
            BigInteger fact=BigInteger.valueOf(1);
            for(int i=2;i<=number;i++)
                fact=fact.multiply(BigInteger.valueOf(i));
            String t=fact.toString();
            int ret = 0;
            for (int i = 0; i < t.length(); i++)
                ret += t.charAt(i) - '0';
             System.out.println(ret);
        }
    }
    
}
