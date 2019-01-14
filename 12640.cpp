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
        vector<ll> a;
        stringstream f(str);
        string temp;
        while(f>>temp)
        {
            stringstream t(temp);
            int g;
            t>>g;
            a.push_back(g);
        }
        ll mx=0;
        ll sum=0;
        for(int i=0;i<a.size();i++)
        {
            sum+=a[i];
            if(a[i]>sum){
                sum=a[i];
            }
                //cout<<sum<<endl;
            if(sum>mx)
                mx=sum;
        }
        cout<<mx<<endl;
    }
    return 0;
}
