#include<bits/stdc++.h>
using namespace std;


bool comp(pair<int,int> a,pair<int,int> b)
{
    int x=a.second-a.first;
    int y=b.second-b.first;
    return x<y;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    int s,e,u,v;
    while(t--)
    {
        vector<bool> vi(11);
        vector<pair<int,int> > a;
        fill(vi.begin(),vi.end(),true);
        while(cin>>u>>v)
        {
            if(u==0&&v==0)break;
            a.push_back({u,v});

        }
        sort(a.begin(),a.end(),comp);
        //cout<<"Sorted\n";
        int count=0;
        for(int i=0;i<a.size();i++)
        {
            bool c=true;
            for(int j=a[i].first;j<a[i].second;j++)
            {
                if(!vi[j])
                {
                    c=false;
                    break;
                }
            }
            if(c)
            {
                for(int j=a[i].first;j<a[i].second;j++)
               {
                   vi[j]=false;
               }
               count++;
            }
        }
        cout<<count<<endl;
        /*for(int i=0;i<11;i++)
        {
            cout<<vi[i]<<" ";
        }
        cout<<endl;*/
    }
    return 0;
}
