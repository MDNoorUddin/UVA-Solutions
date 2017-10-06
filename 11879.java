import java.util.*;
import java.math.*;

public class Uva {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        BigInteger R;
        while(sc.hasNext())
        {
            R= sc.nextBigInteger();
            if(R.equals(BigInteger.valueOf(0))==true)
                break;
	    R=R.mod(BigInteger.valueOf(17));
            if(R.equals(BigInteger.valueOf(0))==true)
                System.out.println(1);
            else System.out.println(0);
        }
    }
    
}
