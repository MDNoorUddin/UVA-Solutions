import java.math.*;
import java.util.*;
class Main{
  public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    String a;
    while(in.hasNext())
    {
        a=in.next();
        BigInteger x=new BigInteger(a);
            boolean s=(x.equals(BigInteger.ZERO));
        if(s)
           {
               break;
           }
        BigInteger X=x.mod(new BigInteger("11"));
        s=(X.equals(BigInteger.ZERO));
        if(s)
        {
            System.out.print(a);
            System.out.printf(" is a multiple of 11.\n");
        }
        else
        {
            System.out.print(a);
            System.out.printf(" is not a multiple of 11.\n");
        }
    }
}

}
