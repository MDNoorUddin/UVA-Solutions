#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    while(getline(cin,str))
    {
        vector<int> a(123);
        fill(a.begin(),a.end(),0);
        for(int i=0;i<str.length();i++)
        {
            if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122))
            a[str[i]]++;
        }
        int max=0;
        for(int i=65;i<=90;i++)
        {
            if(a[i]>max)
                max=a[i];
        }
        for(int i=97;i<=122;i++)
        {
            if(a[i]>max)
                max=a[i];
        }
        for(int i=65;i<=90;i++)
        {
            if(a[i]==max)
                printf("%c",i);
        }
        for(int i=97;i<=122;i++)
        {
            if(a[i]==max)
                printf("%c",i);
        }
        printf(" %d\n",max);
    }
}
