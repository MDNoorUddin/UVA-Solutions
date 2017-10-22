import java.math.*;
import java.util.Arrays;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        while(input.hasNext())
        {
            BigDecimal a;
            int b;
            a=input.nextBigDecimal();
            b=input.nextInt();
            a=a.pow(b);
            a=a.stripTrailingZeros();
            String str=a.toPlainString();
            if(str.charAt(0)!='0')System.out.print(str.charAt(0));
            for(int i=1;i<str.length();i++)System.out.print(str.charAt(i));
            System.out.println();
        }
    }
    
}
