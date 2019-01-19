#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    map<string,int> mp;
    int a=1;
    map<string,int>::iterator it;
    for(int i=1;i<=26;i++)
    {
        string temp;
        char c=(96+i);
        temp=temp+c;
        mp[temp]=a++;
    }/// one
    for(int i=1;i<=25;i++)
    {
        for(int j=i+1;j<=26;j++)
        {
            string temp;
            char c=(96+i);
            temp=temp+c;
            c=96+j;
            temp=temp+c;
            mp[temp]=a++;
        }
    }/// 2

    for(int i=1;i<=24;i++)
    {
        for(int j=i+1;j<=25;j++)
        {
            for(int k=j+1;k<=26;k++)
            {
                string temp;
                char c=(96+i);
                temp=temp+c;
                c=96+j;
                temp=temp+c;
                c=96+k;
                temp=temp+c;
                mp[temp]=a++;
            }
        }
    }/// 3


    for(int i=1;i<=23;i++)
    {
        for(int j=i+1;j<=24;j++)
        {
            for(int k=j+1;k<=25;k++)
            {
                for(int l=k+1;l<=26;l++)
                {
                    string temp;
                    char c=(96+i);
                    temp=temp+c;
                    c=96+j;
                    temp=temp+c;
                    c=96+k;
                    temp=temp+c;
                    c=96+l;
                    temp=temp+c;
                    mp[temp]=a++;
                }
            }
        }
    }/// 4


    for(int i=1;i<=22;i++)
    {
        for(int j=i+1;j<=23;j++)
        {
            for(int k=j+1;k<=24;k++)
            {
                for(int l=k+1;l<=25;l++)
                {
                    for(int m=l+1;m<=26;m++)
                    {
                        string temp;
                        char c=(96+i);
                        temp=temp+c;
                        c=96+j;
                        temp=temp+c;
                        c=96+k;
                        temp=temp+c;
                        c=96+l;
                        temp=temp+c;
                        c=96+m;
                        temp=temp+c;
                        mp[temp]=a++;
                    }
                }
            }
        }
    }/// 4
    string str;
    while(cin>>str)
    {
        if(mp[str])
        {
            cout<<mp[str]<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }

}
