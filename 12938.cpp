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
#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define INF 9999999
#define pfc(I,a) printf("Case %d: %d\n",I++,a)
#define pc(I) printf("Case %d: ",I++)
#define pf(n) printf("%d\n",n)
#define sf(n) scanf("%d",&n)
#define nl printf("\n");
int I=1;

int main()
{
    int t;
    string str;
    /*for(int i=32;i*i<10000;i++)
    {
        stringstream f;
        int u=i*i;
        cout << u << endl;
    }*/
    //cout<<"-------------------\n";
    cin>>t;
    while(t--)
    {
        cin>>str;
        int count=0;
        set<int> c;
        for(int i=0;i<str.size();i++)
        {
            for(int j=0;j<=9;j++)
            {
                if(i==0&&j==0)continue;
                string temp=str;
                temp[i]=j+48;
                stringstream ff(temp);
                int uu;
                ff>>uu;
                int z=sqrt(uu);
                //cout<<" =============== "<<uu<<endl;
                if(z*z == uu && temp!=str){
                    //cout<<" :) :) :) :) :) "<<uu<<endl;
                    c.insert(uu);
                    //cout << uu << endl;
                }
            }
        }

        pc(I);
        printf("%d\n",c.size());
    }
}

