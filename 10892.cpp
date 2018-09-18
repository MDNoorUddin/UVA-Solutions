#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<vector>
#include<set>
#include<string>
#include<map>
#include<queue>
#include<stack>
#include<iterator>
#include<algorithm>

using namespace std;

typedef long long ll;

#define MAX 999999999999
#define MIN -99999999999

int main()
{
    ll n;
    while(cin>>n)
    {
        if(n==0)break;
        vector<ll> sq;
        int count=0;
        set<pair<int,int> > x;
        for(int i=1;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                count+=2;
                if((n/i)%i!=0)count++;
                sq.push_back(i);
                sq.push_back(n/i);
                x.insert(make_pair(i,n));
                x.insert(make_pair(n/i,n));
            }
        }
        for(int i=0;i<sq.size();i++)
        {
            for(int j=i;j<sq.size();j++)
            {
                ll gcd = __gcd(sq[i],sq[j]);
                if((sq[i]*sq[j])/gcd==n){
                    x.insert(make_pair(min(sq[i],sq[j]),max(sq[i],sq[j])));
                    //cout<<sq[i]<<" "<<sq[j]<<endl;
                }
            }
        }
        /*auto it= x.begin();
        while(it!=x.end())
        {
            cout<<it->first<<" "<<it->second<<endl;
            it++;
        }*/
        cout<<n<<" "<<x.size()<<endl;
    }
}
