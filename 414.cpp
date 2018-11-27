#include<bits/stdc++.h>
#include<bitset>
#include<iostream>
#include<vector>
#include<string>
#include<string.h>
#include<math.h>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include<algorithm>
#include<queue>
#include<stack>
#include<deque>
#include<stdio.h>
#include<bitset>

using namespace std;

#define ll long long
#define INF 9999999
#define pfc(I,a) printf("Case %d: %d\n",I++,a)
#define pc(I) printf("Case %d: ",I++)
#define pf(n) printf("%d\n",n)
#define sf(n) scanf("%d",&n)
#define nl printf("\n");

int main()
{
    //freopen("c.txt","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    string str;
    while(cin>>n&&n)
    {
        cin.ignore();
        vector<int> a(n);
        fill(a.begin(),a.end(),0);
        for(int j=0;j<n;j++)
        {
            getline(cin,str);
            for(int i=0;i<str.length();i++)
            {
                if(str[i]=='X')a[j]++;
            }
        }
        sort(a.begin(),a.end(),greater<int>());
        n=0;
        for(int i=1;i<a.size();i++)
        {
            n+=(a[0]-a[i]);
        }
        cout<<n<<endl;
    }
}
