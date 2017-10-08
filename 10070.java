import java.util.*;
import java.math.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        BigInteger year;
        boolean first=false;
        while(sc.hasNext())
        {
            if(first==true)
                System.out.println();
            first=true;
            year=sc.nextBigInteger();
            boolean leapYear=false;
            boolean hulu=false;
            boolean bulu=false;
            if(year.mod(BigInteger.valueOf(4)).equals(BigInteger.ZERO)==true&&year.mod(BigInteger.valueOf(100)).equals(BigInteger.ZERO)==false)
            {
                leapYear=true;
                if(year.mod(BigInteger.valueOf(55)).equals(BigInteger.ZERO)==true)
                    bulu=true;
            }
            else if(year.mod(BigInteger.valueOf(400)).equals(BigInteger.ZERO)==true)
            {
                leapYear=true;
                if(year.mod(BigInteger.valueOf(55)).equals(BigInteger.ZERO)==true)
                    bulu=true;
            }
            if(year.mod(BigInteger.valueOf(15)).equals(BigInteger.ZERO)==true)
                    hulu=true;
            if(leapYear==false&&hulu==false&&bulu==false)
            {
                System.out.println("This is an ordinary year.");
            }
            if(leapYear==true)
            {
                System.out.println("This is leap year.");
            }
            if(hulu==true)
            {
                System.out.println("This is huluculu festival year.");
            }
            if(bulu)
            {
                System.out.println("This is bulukulu festival year.");
            }
        }
    }
    
}
