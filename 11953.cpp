#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("c.txt","w",stdout);
    int t;
    cin>>t;
    int I=1;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> str(n);
        for(int i=0;i<n;i++)
        {
            cin>>str[i];
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(str[i][j]=='x')
                {
                    count++;
                    queue<pair<int,int> > x;
                    x.push(make_pair(i,j));
                    while(!x.empty())
                    {
                        int  f=x.front().first;
                        int g=x.front().second;
                        x.pop();
                        str[f][g]='.';
                        if(f+1<n)
                        {
                            if(str[f+1][g]=='x'||str[f+1][g]=='@')
                                x.push(make_pair(f+1,g));
                        }
                        if(f-1>=0)
                        {
                            if(str[f-1][g]=='x'||str[f-1][g]=='@')
                                x.push(make_pair(f-1,g));
                        }

                        if(g+1<n)
                        {
                            if(str[f][g+1]=='x'||str[f][g+1]=='@')
                                x.push(make_pair(f,g+1));
                        }
                        if(g-1>=0)
                        {
                            if(str[f][g-1]=='x'||str[f][g-1]=='@')
                                x.push(make_pair(f,g-1));
                        }
                    }
                }
            }
        }
        printf("Case %d: %d\n",I++,count);
    }
}
