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
        int a;
        while(input.hasNext())
        {
            a=input.nextInt();
            //if(a==0)break;
            String str=Integer.toBinaryString(a);
            //System.out.println(str.length());
            //System.out.println(str);
            if(a<0)
                    {
                        String reverse="";
                        for(int i=24;i<str.length();i++)
                            reverse=reverse+str.charAt(i);
                        for(int i=16;i<24;i++)
                            reverse=reverse+str.charAt(i);
                        for(int i=8;i<16;i++)
                            reverse=reverse+str.charAt(i);
                        for(int i=0;i<8;i++)
                            reverse=reverse+str.charAt(i);
                        
                        if(reverse.charAt(0)=='0')
                        {
                            BigInteger x=new BigInteger(reverse,2);
                            System.out.printf("%d converts to %d\n",a,x);
                        }
                        else{
                            
                        char[] m = reverse.toCharArray(); 
                        
                        for(int i=0;i<str.length();i++)
                        {
                            if(m[i]=='1')
                                m[i]='0';
                            else
                                m[i]='1';
                        }
                        str = String.valueOf(m);
                        //System.out.println(str);
                        BigInteger x=new BigInteger(str,2);
                        x=x.add(BigInteger.ONE);
                        String result=x.toString(2);
                        //System.out.println(result);
                        x=new BigInteger(result,2);
                        //System.out.println("-" + x);
                        if(result.charAt(0)=='0')
                        {
                            System.out.printf("%d converts to %d\n",a,x);
                        }
                        else
                        {
                            System.out.printf("%d converts to -%d\n",a,x);
                        }
                        }
                    }
            else
            {
                String reverse="";
                //System.out.println(str);
                for(int i=1;i<=32-str.length();i++)
                {
                    reverse=reverse+'0';
                }
                for(int i=0;i<str.length();i++)
                    reverse=reverse+str.charAt(i);
                String STR;
                STR=reverse;
                reverse="";
                for(int i=24;i<STR.length();i++)
                            reverse=reverse+STR.charAt(i);
                for(int i=16;i<24;i++)
                          reverse=reverse+STR.charAt(i);
                for(int i=8;i<16;i++)
                            reverse=reverse+STR.charAt(i);
                for(int i=0;i<8;i++)
                            reverse=reverse+STR.charAt(i);
                if(reverse.charAt(0)=='0')
                {
                    BigInteger x=new BigInteger(reverse,2);
                    //System.out.println("string " + reverse);
                    System.out.printf("%d converts to %d\n",a,x);
                }
                else
                {
                    char[] m = reverse.toCharArray();
                    for(int i=0;i<reverse.length();i++)
                        {
                            if(m[i]=='1')
                                m[i]='0';
                            else
                                m[i]='1';
                        }
                    str = String.valueOf(m);
                        //System.out.println(str);
                        BigInteger x=new BigInteger(str,2);
                        x=x.add(BigInteger.ONE);
                        String result=x.toString(2);
                        //System.out.println(result);
                        x=new BigInteger(result,2);
                        System.out.printf("%d converts to -%d\n",a,x);
                }
            }
        }
    }
}
