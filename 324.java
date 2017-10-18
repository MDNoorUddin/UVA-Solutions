
import java.util.Scanner;
import java.math.*;
public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        BigInteger A;
        while (in.hasNext()) {
            int n=in.nextInt();
            A=BigInteger.valueOf(1);
            if(n==0)break;
            for(int i=2;i<=n;i++)
                A=A.multiply(BigInteger.valueOf(i));
            String s=A.toString();
            int[] a = new int[10];
            for(int i=0;i<10;i++)a[i]=0;
            for (int i = 0; i < s.length(); i++) {
              a[s.charAt(i) - '0']++;
            }
            System.out.println(n+"! --");
        System.out.println("    (0)    "+a[0]+"    (1)    "+a[1]+"    (2)    "+a[2]+"    (3)    "+a[3]+"    (4)    "+a[4]);
System.out.println("    (5)    "+a[5]+"    (6)    "+a[6]+"    (7)    "+a[7]+"    (8)    "+a[8]+"    (9)    "+a[9]);
        }
    }
}
