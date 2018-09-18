import java.util.*;
import java.lang.*;
import java.math.*;

public class Main{
         
        public static void main(String args[]){

                   Scanner sc = new Scanner(System.in);
                   
                   BigInteger c=new BigInteger("10");

                   while(sc.hasNext()){
                       
                       String a=sc.next();
                       String b=sc.next();
                       if(a.equals("0")&&b.equals("0"))break;
                       BigInteger A=new BigInteger(a);
                       BigInteger B=new BigInteger(b);
                       A=A.modPow(B,c);
                       System.out.println(A);
                 }
       }

}
