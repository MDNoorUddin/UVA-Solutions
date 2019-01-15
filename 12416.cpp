#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string str;
    while(getline(cin,str))
    {
        int count=0;
        int mx=0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]==' ')count++;
            else
            {
                mx=max(mx,count);
                count=0;
            }
        }
        if(count!=0)
        {
            mx=max(mx,count);
            count=0;
        }
        //cout<<mx<<endl;
        int x=ceil(log2(mx));
        cout<<x<<endl;
    }
    return 0;
}
