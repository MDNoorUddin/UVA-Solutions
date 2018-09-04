#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<string>
#include<cmath>
#include<cstdio>
#include<list>
#include<cstring>

using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin>>t;
    int h,w;
    int count=1;
    while(t--)
    {
        cin>>h>>w;
        vector<string> str(h);
        for(int i=0;i<h;i++)
        {
            cin>>str[i];
        }
        map<char,int> mp;
        map<char,int>::iterator it;
        for(int i=0;i<h;i++)
        {
           // cout<<"in\n";
            for(int j=0;j<w;j++)
            {
                if(str[i][j]!='*')
                {
                    mp[str[i][j]]++;
                    queue<pair<int,int> > x;
                    x.push(make_pair(i,j));
                    while(!x.empty())
                    {
                       // cout<<"inside\n";
                        int I = x.front().first;
                        int J = x.front().second;
                        x.pop();
                        char c=str[I][J];
                        //cout<<c<<endl;
                        str[I][J]='*';
                        if(J+1<str[I].length()&&c!='*')
                        {
                            if(str[I][J+1]==c)
                            {
                                x.push(make_pair(I,J+1));
                            }
                        }
                        if(I+1<str.size()&&c!='*')
                        {
                            if(str[I+1][J]==c)
                            {
                                x.push(make_pair(I+1,J));
                            }
                        }
                        if(I-1>=0&&c!='*')
                        {
                            if(str[I-1][J]==c)
                            {
                                x.push(make_pair(I-1,J));
                            }
                        }
                        if(J-1>=0&&c!='*')
                        {
                            if(str[I][J-1]==c)
                            {
                                x.push(make_pair(I,J-1));
                            }
                        }

                    }
                }
            }
        }
        //cout<<"out\n";
        priority_queue<pair<int,char> >  X;
        it=mp.begin();
        while(it!=mp.end())
        {
            int v=it->first;
            //cout<<v<<endl;
            X.push(make_pair(it->second,-v));
            it++;
        }
        printf("World #%d\n",count++);
        while(!X.empty())
        {
            char D=abs(X.top().second);
            cout<<D<<": "<<X.top().first<<endl;
            X.pop();
        }
    }
    return 0;
}
