import java.math.BigInteger;
import java.util.Scanner;
class Main {
    public static void main(String[] args) {
      Scanner sc=new Scanner(System.in);
      int n;
      while(in.hasNext())
      {
          n=in.nextInt();
          BigInteger A=BigInteger.ONE;
          BigInteger B=BigInteger.ONE;
          BigInteger c=BigInteger.ZERO;
          while(n>=3)
          {
              c=A.add(B);
              B=A;
              A=c;
              n=n-1;
          }
       System.out.println(c);
      }
    }

}
