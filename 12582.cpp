
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin>>t;
    int I=1;
    while(t--)
    {
        string str;
        cin>>str;
        vector<int> a(27);
        stack<char> s;
        s.push(str[0]);
        vector<vector<int> > x(27);
        vector<pair<char,char> > ans;
        for(int i=1;i<str.length();i++)
        {
            if(str[i]==s.top())
            {
                s.pop();
            }
            else
            {
                ans.push_back(make_pair(s.top(),str[i]));
                int I=s.top()-64;
                int J=str[i]-64;
                x[I].push_back(J);
                s.push(str[i]);
            }
        }
        /*for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i].first<<" "<<ans[i].second<<endl;
        }*/
        int firstT=str[0]-64;
        queue<int> visit;
        visit.push(firstT);
        vector<int> letter(27);
        fill(letter.begin(),letter.end(),0);
        while(!visit.empty())
        {
            int first=visit.front();
            visit.pop();
             if(first!=firstT)
            letter[first]++;
            for(int i=0;i<x[first].size();i++)
            {
                visit.push(x[first][i]);
                letter[first]++;
            }
        }
        printf("Case %d\n",I++);
        for(int i=1;i<=26;i++)
        {
            //cout<<letter[i]<<endl;
            if(letter[i]!=0)
            {
                char d=i+64;
                cout<<d<<" = "<<letter[i]<<endl;
            }
        }
    }
    return 0;
}
