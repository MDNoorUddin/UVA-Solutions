#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        cin>>str;
        int C=0,H=0,N=0,O=0;
        int Size=str.length();
        for(int i=0;i<str.length();)
        {
            if(str[i]>=65&&str[i]<=90)
            {
                if(i+1==Size)
                {
                    if(str[i]=='C')C++;
                    else if(str[i]=='H')H++;
                    else if(str[i]=='N')N++;
                    else O++;
                    i++;
                }
                else if(str[i+1]<65)
                {
                    char p=str[i];
                    char a[3];
                    a[0]=str[i+1];
                    if(i+2==Size)
                        i+=2;
                    else
                    {
                        if(str[i+2]<65)
                        {
                            a[1]=str[i+2];
                            i+=3;
                        }
                        else
                            i+=2;

                    }
                    if(p=='C')C+=atoi(a);
                    else if(p=='H')H+=atoi(a);
                    else if(p=='N')N+=atoi(a);
                    else O+=atoi(a);

                }
                else
                {
                    if(str[i]=='C')C++;
                    else if(str[i]=='H')H++;
                    else if(str[i]=='N')N++;
                    else O++;
                    i++;
                }
            }
        }
        double total;
        double a,b,c,d;
        a=C*12.01;
        b=H*1.008;
        c=O*16.00;
        d=N*14.01;
        total=a+b+c+d;
        printf("%.3lf\n",total);
    }
    return 0;
}
