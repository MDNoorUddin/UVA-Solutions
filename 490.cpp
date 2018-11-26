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
    vector<string> a;
    string str;
    int mx=0;
    while(getline(cin,str))
    {
        a.push_back(str);
        if(str.length()>mx){
            mx=str.length();
        }
    }

    for(int i=0;i<a.size();i++)
    {
        for(int j=a[i].length();j<=100;j++)
        {
            a[i]=a[i]+" ";
        }
    }
    int index=0;
    for(int i=0;i<mx;i++)
    {
        for(int j=a.size()-1;j>=0;j--)
        {
            cout<<a[j][i];
        }
        cout<<endl;
    }

}
