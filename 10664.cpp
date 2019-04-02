#include<bits/stdc++.h>
using namespace std;

typedef  long long ll;
bool x=false;
void dp(vector<int> a,int l,int r,int i,int n)
{
    if(i==n)
    {
        if(l==r)
        x=true;
        return;
    }
    dp(a,l+a[i],r,i+1,n);
    dp(a,l,r+a[i],i+1,n);
}

int main() {
	//ios::sync_with_stdio(false);
    //cin.tie(0);
    int t,I=1;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        vector<int > a;
        int temp=0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]==' ')
            {
                a.push_back(temp);
                temp=0;
            }
            else
            {
                temp=(temp*10)+(str[i]-48);
            }
        }
        a.push_back(temp);
        int l=0,r=0;
        dp(a,l,r,0,a.size());
        if(x)cout<<"YES\n";
        else cout<<"NO\n";
        x=false;
    }
}
