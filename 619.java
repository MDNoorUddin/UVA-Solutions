import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.PrintStream;
import java.math.*;
import java.util.Arrays;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws FileNotFoundException {
        //PrintStream out = new PrintStream(new FileOutputStream("output.txt"));
        //System.setOut(out);
        Scanner input=new Scanner(System.in);
        String str="";
        while(input.hasNext())
        {
            str=input.next();
            if(str.equals("*")==true)break;
            char c=str.charAt(0);
            int t=(int) c;
            if(t<58)
            {
                String ans="";
                BigInteger a=new BigInteger(str);
                int o;
                while(true)
                {
                    if(a.equals(BigInteger.ZERO))break;
                    o=a.mod(BigInteger.valueOf(26)).intValue();
                    //System.out.println(o);
                    o+=96;
                    if(o==96)
                        o=122;
                    char d=(char) o;
                    ans=ans+d;
                    if(a.compareTo(BigInteger.valueOf(27))==-1)break;
                    a=a.divide(BigInteger.valueOf(26));
                }
                for(int i=ans.length()-1;i>=0;i--)
                {
                    System.out.print(ans.charAt(i));
                }
                for (int i = 0; i < 22 - ans.length(); i++)
                  System.out.print(" ");
                int k=str.length()%3;
                for(int i=0;i<k&&i<str.length();i++)
                    System.out.print(str.charAt(i));
                //if(k==0)k=-1;
                for(int i=k,comma=1;i<str.length();i++,comma++)
                {
                    if(comma==1&&k!=0)System.out.print(",");
                    System.out.print(str.charAt(i));
                    if(comma%3==0&&i+1!=str.length())System.out.print(",");
                }
                System.out.println();
            }
            else
            {
                BigInteger ans=BigInteger.ZERO;
                for(int i=str.length()-1,j=0;i>=0;i--,j++)
                {
                    BigInteger yt=BigInteger.valueOf((int) str.charAt(i)).subtract(BigInteger.valueOf(96));
                    //if(yt.equals(BigInteger.valueOf(26)))yt=BigInteger.ZERO;
                    ans=ans.add(yt.multiply(BigInteger.valueOf(26).pow(j)));
                }
                //System.out.println(ans);
                String f=ans.toString();
                for(int i=0;i<str.length();i++)
                {
                    System.out.print(str.charAt(i));
                }
                for (int i = 0; i < 22 - str.length(); i++)
                  System.out.print(" ");
                int k=f.length()%3;
                for(int i=0;i<k&&i<f.length();i++)
                    System.out.print(f.charAt(i));
                //if(k==0)k=-1;
                for(int i=k,comma=1;i<f.length();i++,comma++)
                {
                    if(comma==1&&k!=0)System.out.print(",");
                    System.out.print(f.charAt(i));
                    if(comma%3==0&&i+1!=f.length())System.out.print(",");
                }
                System.out.println();
            }
        }
    }
}
