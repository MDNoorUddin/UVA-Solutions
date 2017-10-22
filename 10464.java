package javaapplication3;
import java.math.*;
import java.util.Arrays;
import java.util.Scanner;
public class JavaApplication3 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n=input.nextInt();
        while(n-->0)
        {
            BigDecimal a,b;
            a=input.nextBigDecimal();
            b=input.nextBigDecimal();
            a=a.add(b);
            //BigDecimal str=a.stripTrailingZeros();
            char output[] = a.toString().toCharArray();
            int len = output.length - 1;
            while (len >= 0 && output[len] == '0') len--; 
             if (len >= 0 && output[len] == '.') len++;
              for (int i = 0; i <= len; i++) System.out.print(output[i]);
                   System.out.println();
        }
    }
    
}
