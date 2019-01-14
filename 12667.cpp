#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,sub,tm;
    cin>>n>>tm>>sub;
    int te,id;
    string p,ans;
    vector<vector<pair<int,int> > >a(n);
    while(sub--)
    {
        cin>>te>>id>>p>>ans;
        //cout<<p<<endl;
        if(ans=="Yes")
        {
            int r=p[0]-65;
            //cout<<r<<endl;
            bool be=false;
            for(int i=0;i<a[r].size();i++)
            {
                if(a[r][i].second==id)
                {
                    be=true;
                    break;
                }
            }
            if(be)
                continue;
            a[r].push_back({te,id});

        }
    }
    //cout<<"hreevg\n";
    for(int i=0;i<a.size();i++)
    {
        char d='A'+i;
        if(a[i].empty())
        {
            cout<<d<<" - -\n";
            continue;
        }
        cout<<d<<" ";
        /*for(int j=0;j<a[i].size();j++)
        {
            cout<<a[i][j].first<<" ";
        }
        cout<<'\n';**/
       // sort(a[i].begin(),a[i].end());
        cout<<a[i][a[i].size()-1].first<<" "<<a[i][a[i].size()-1].second<<endl;
    }
    return 0;
}
