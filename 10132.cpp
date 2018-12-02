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
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef std::vector<double> vi;

#define PI acos(-1)
#define E 2.718281828459
#define G 9.81
#define pf(x,y) printf("Case %d: %d\n",x++,y)

int I=1;

int main(int argc, char** argv) {
    //freopen("c.txt","w",stdout);
    string str;
    int t;
    cin>>t;
    cin.ignore();
    getline(cin,str);
    bool x=false;
    while(t--){
        vector<string> a;
        int mn=9999;
        int mx=0;
        if(x)cout<<endl;
        x=true;
    while(getline(cin,str))
    {
        if(str=="")break;
        a.push_back(str);
        if(str.length()<mn)mn=str.length();
        if(str.length()>mx)mx=str.length();
    }
    int fix=mx+mn;
    map<string,int> mp;
    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<a.size();j++)
        {
            if(i!=j)
            {
                if(a[i].length()+a[j].length()==fix)
                {
                    mp[a[i]+a[j]]++;
                    mp[a[j]+a[i]]++;
                }
            }
        }
    }
    map<string,int>::iterator it;
    it=mp.begin();
    mx=0;
    while(it!=mp.end())
    {
        if(it->second>mx)mx=it->second;
        //cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    it=mp.begin();
    while(it!=mp.end())
    {
        if(it->second==mx){
        cout<<it->first<<endl;
        break;
        }
        it++;
    }
    }
    return 0;
}
