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

int CS=1;

int main()
{
    //freopen("c.txt","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    while(cin>>str)
    {
        vector<string> a;
        a.push_back(str);
        while(cin>>str)
        {
            if(str=="9")break;
            a.push_back(str);
        }
        sort(a.begin(),a.end());
        unordered_map<string,int> uva;
        unordered_map<string,int>::iterator it;
        uva[a[0]]=1;
        bool x=false;

        for(int j=1;j<a.size();j++)
        {
            string temp;
            for(int i=0;i<a[j].length();i++)
            {
                temp=temp+a[j][i];
                if(uva[temp]!=0)
                {
                    x=true;
                    break;
                }
            }
            uva[a[j]]=1;
        }



        if(x)
        {
            cout<<"Set "<<CS++<<" is not immediately decodable\n";
        }
        else
        {
            cout<<"Set "<<CS++<<" is immediately decodable\n";
        }
    }
}
