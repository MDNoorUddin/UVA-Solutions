#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("uri.txt","w",stdout);
    int t;
    cin>>t;
    cin.ignore();
    int Case=1;
    while(t--)
    {
        string site;
        int score;
        int i=0;
        vector< pair<string,int> > x;
        int max=0;
        while(i<10)
        {
            cin>>site>>score;
            x.push_back(make_pair(site,score));
            if(score>max)
                max=score;
            i++;
        }
        i=0;
        printf("Case #%d:\n",Case++);
        while(i<10)
        {
            if(x[i].second==max)
            {
                cout<<x[i].first<<endl;
            }
            i++;
        }
    }
}
