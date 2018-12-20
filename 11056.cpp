#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<vector>
#include<string>
#include<algorithm>
#include<map>
#include<iterator>
#include<set>
#include<queue>
#include<bits/stdc++.h>

using namespace std;

int I=1;
typedef long long ll;

bool comp(pair<int,string> a,pair<int,string> b)
{
    if(a.first==b.first)
    {
        string x=a.second;
        string y=b.second;
        for(int i=0;i<x.length();i++)
        {
            x[i]=tolower(x[i]);
        }
        for(int i=0;i<y.length();i++)
        {
            y[i]=tolower(y[i]);
        }
        return x<y;
    }
    else
    {
        return a<b;
    }
}

int main()
{

    //ios::sync_with_stdio(false);
    //cin.tie(0);
    //freopen("c.txt","w",stdout);
    int n;
    char a[30];
    int x,y,z;
    while(cin>>n){
    cin.ignore();
    vector<pair<int,string> > speed;
    while(n--)
    {
        scanf("%s : %d min %d sec %d ms",a,&x,&y,&z);
        //cout<<a<<" "<<x<<" "<<y<<" "<<x<<endl;
        string s=a;
        speed.push_back({(60000*x+1000*y+z),s});
    }
    sort(speed.begin(),speed.end(),comp);
    int I=1;
    for(int i=1;i<=speed.size();i++)
    {
        if(i%2!=0)
        {
            printf("Row %d\n",I++);
        }
        cout<<speed[i-1].second<<endl;
    }
    printf("\n");
    }
    return 0;
}
