import java.util.*;
import java.math.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int B,P,M;
        while(sc.hasNext())
        {
            B=sc.nextInt();
            P=sc.nextInt();
            M=sc.nextInt();
            BigInteger R = BigInteger.valueOf(B);
	    R = R.modPow(BigInteger.valueOf(P),BigInteger.valueOf(M));
            System.out.println(R);
        }
    }
    
}
