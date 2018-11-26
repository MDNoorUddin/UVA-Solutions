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
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    while(cin>>n&&n)
    {
        cin.ignore();
        string str,judge,test;
        for(int i=1;i<=n;i++)
        {
            getline(cin,str);
            judge=judge+str;
        }
        cin>>m;
        cin.ignore();
        for(int i=1;i<=m;i++)
        {
            getline(cin,str);
            test=test+str;
        }
        if(n==m&&judge==test)
        {
            cout<<"Run #"<<CS++<<": Accepted\n";
        }
        else
        {
            string nn,mm;
            for(int i=0;i<judge.length();i++)
            {
                if(judge[i]>='0'&&judge[i]<='9')nn=nn+judge[i];
            }
            for(int i=0;i<test.length();i++)
            {
                if(test[i]>='0'&&test[i]<='9')mm=mm+test[i];
            }
            if(nn==mm)
            {
                cout<<"Run #"<<CS++<<": Presentation Error\n";
            }
            else
            {
                cout<<"Run #"<<CS++<<": Wrong Answer\n";
            }
        }
    }
}
