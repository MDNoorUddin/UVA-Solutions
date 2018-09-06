#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,start;
    while(cin>>n>>m>>start)
    {
        if(n==0&&m==0&&start==0)break;
        vector<string> str(n);
        for(int i=0;i<n;i++)
        {
            cin>>str[i];
        }
        vector< vector<int> > visit(n);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)visit[i].push_back(-1);
        }
        int step=0;
        queue<pair<int,int> > x;
        bool out=true;
        x.push(make_pair(0,start-1));
        while(!x.empty())
        {
            if(visit[x.front().first][x.front().second]!=-1)
            {
                //cout<<"step "<<step<<endl;
                //cout<<str[x.front().first][x.front().second]<<"->->->"<<visit[x.front().first][x.front().second]<<endl;
                out=false;
                printf("%d step(s) before a loop of %d step(s)\n",visit[x.front().first][x.front().second]
                       ,step-visit[x.front().first][x.front().second]);
                break;
            }
            int I=x.front().first;
            int J=x.front().second;
            x.pop();
            visit[I][J]=step;
            //cout<<str[I][J]<<"->->->"<<visit[I][J]<<endl;
            step++;
            if(str[I][J]=='N')
            {
                if(I-1<0)
                {
                    break;
                }
                x.push(make_pair(I-1,J));
            }
            else if(str[I][J]=='S')
            {
                if(I+1>=n)
                {
                    break;
                }
                x.push(make_pair(I+1,J));
            }
            else if(str[I][J]=='E')
            {
                if(J+1>=m)
                {
                    break;
                }
                x.push(make_pair(I,J+1));
            }
            else
            {
                if(J-1<0)
                {
                    break;
                }
                x.push(make_pair(I,J-1));

            }
        }
        if(out)
        {
            printf("%d step(s) to exit\n",step);
        }
    }
    return 0;
}
