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

ll gcd(ll a, ll b) { return (b == 0 ? a : gcd(b, a % b)); }

void primeFactors(int n);

vector< vector<int> > factors(101);


bool comp(string a,string b)
{
        string A=a+b;
        string B=b+a;
        return A>B;
}

int main()
{
    //freopen("x.txt","w",stdout);
    int n;
    while(cin>>n)
    {
        if(n==0)break;
        vector<string> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end(),comp);
        for(int i=0;i<n;i++)
        {
            cout<<a[i];
        }
        cout<<endl;
    }
}
