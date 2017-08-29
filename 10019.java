
import java.io.File;
import java.util.*;
import java.math.*;

    class Main{

    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int t;
        t=sc.nextInt();
        while(t-->0){
             int n;
             n=sc.nextInt();
             String Bin1=Integer.toBinaryString(n);
             long b1=0;
             for(int i=0;i<Bin1.length();i++)
             {
                 if(Bin1.charAt(i)=='1')
                     b1++;
             }
             Bin1=Integer.toString(n);
             long b2=0;
             String temp=new String();
             for(int i=0;i<Bin1.length();i++)
             {
                 if(Bin1.charAt(i)=='0')continue;
              if(Bin1.charAt(i)=='1'||Bin1.charAt(i)=='2'||Bin1.charAt(i)=='4'||Bin1.charAt(i)=='8')
                     b2+=1;
               else if(Bin1.charAt(i)=='3'||Bin1.charAt(i)=='5'||Bin1.charAt(i)=='6'||Bin1.charAt(i)=='9'||Bin1.charAt(i)=='A'||Bin1.charAt(i)=='C')
                     b2+=2;
               else if(Bin1.charAt(i)=='4')
                     b2+=4;
               else b2+=3;

             }
              System.out.println(b1+" "+b2);
        }
   }
}

