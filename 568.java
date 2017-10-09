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
            char x=' ';
            for (int i = t.length()-1; i>=0; i--)
            {
                if(t.charAt(i)!='0')
                {
                    x=t.charAt(i);
                    break;
                }
            }
            System.out.printf("%5d -> %c\n",number,x);
        }
    }
    
}
