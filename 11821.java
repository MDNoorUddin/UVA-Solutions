import java.math.*;
import java.util.Arrays;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n=input.nextInt();
        while(n-->0)
        {
            BigDecimal sum=BigDecimal.ZERO;
            BigDecimal temp;
            while(true)
            {
               temp=input.nextBigDecimal();
               if(temp.equals(BigDecimal.ZERO)==true)break;
               sum=sum.add(temp);
            }
            char[] f=sum.toString().toCharArray();
             int len = f.length - 1;

                while(len >= 0 && f[len] == '0') len--; 
                 if (len >= 0 && f[len] == '.') len--;
            for (int i = 0; i <= len; i++) System.out.print(f[i]);
              System.out.println();
        }
    }
    
}
