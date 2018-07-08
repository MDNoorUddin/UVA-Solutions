#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iterator>
#include<map>
#include<set>
#include<string>
#include<cstring>
#include<cstdio>
#include<stack>
#include<queue>
#include<math.h>
#include <utility>
#include <sstream>
#include<bitset>
#include<string.h>

using namespace std;

typedef long long ll;


#define PI acos(-1)
#define E 2.718281828459
#define g 9.81


int main(int argc, char** argv) {
    int t;
    cin>>t;
    int l=1;
    while(t--)
    {
        int n;
        cin>>n;
        vector< pair<ll,ll> > a;
        ll x,y;
        while(n--)
        {
            cin>>x>>y;
            a.push_back(make_pair(y,x));
        }
        //sort(a.begin(),a.end());

        ll maxx=0;
        for(int i=0;i<a.size();i++)
        {
            int h=a[i].first;
            ll sum=0;
            for(int j=0;j<a.size();j++)
            {
                if(a[j].first>=h)
                 sum+=(h*a[j].second);
            }
            if(sum>maxx)maxx=sum;
        }
        printf("Case %d: %lld\n",l++,maxx);
    }
	return 0;
}
