#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    int I=1;
    while(cin>>n>>m&&n&&m)
    {
        vector<string> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        priority_queue<pair<int,int> > mp;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i][j]!='.')
                {
                    int ab=a[i][j];
                    char f=a[i][j];
                    //cout<<f<<endl;
                    int count=0;
                    queue<pair<int,int> > x;
                    x.push(make_pair(i,j));
                    while(!x.empty())
                    {
                        int I = x.front().first;
                        int J = x.front().second;
                        if(a[I][J]!='.')
                        count++;
                        a[I][J]='.';

                        x.pop();
                        if(J+1<m&&a[I][J+1]==f)
                        {
                            x.push(make_pair(I,J+1));
                        }
                        if(J-1>=0&&a[I][J-1]==f)
                        {
                            x.push(make_pair(I,J-1));
                        }
                        if(I+1<n&&a[I+1][J]==f)
                        {
                            x.push(make_pair(I+1,J));
                        }
                        if(I-1>=0&&a[I-1][J]==f)
                        {
                            x.push(make_pair(I-1,J));
                        }

                    }

                    mp.push(make_pair(count,-ab));
                }
            }
        }
        printf("Problem %d:\n",I++);
        while(!mp.empty())
        {
            char c=abs(mp.top().second);
            cout<<c<<" "<<mp.top().first<<endl;
            mp.pop();
        }
    }
    return 0;
}
