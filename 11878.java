import java.math.*;
import java.util.Arrays;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String str;
        int sum=0;
        while(input.hasNext())
        {
            str=input.next();
            int a=0,b=0,c=0,test=0;
            char operation=' ';
            String num="";
            for(int i=0;i<str.length();i++)
            {
                if(str.charAt(i)=='=')
                {
                    b=Integer.parseInt(num);
                    num="";
                }
                else if(str.charAt(i)=='+'||str.charAt(i)=='-')
                {
                    a=Integer.parseInt(num);
                    num="";
                    operation=str.charAt(i);
                }
                else num=num+str.charAt(i);
            }
            if(num.equals("?")==false)
            {
                c=Integer.parseInt(num);
                num="";
                if(operation=='+')
                {
                    test=a+b;
                }else
                {
                    test=a-b;
                }
                if(test==c)
                    sum++;
            }
        }
        System.out.println(sum);
    }
}
