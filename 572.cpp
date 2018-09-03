#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iterator>
#include<map>
#include<set>
#include<string>
#include<cstring>
#include<cstdio>
#include<stack>
#include<queue>
#include<math.h>
#include <utility>
#include <sstream>

using namespace std;

typedef long long ll;


int main(int argc, char** argv){
    int n,m;
	while(cin>>n>>m)
	{
	    if(n==0&&m==0)break;
		cin.ignore();
		string test;
		vector<string> str;
		for(int i=0;i<n;i++){
            cin>>test;
            str.push_back(test);
		}
		//int count=0;
		vector<vector<int> > visit;
		for(int i=0;i<n;i++)
        {
            vector<int> zero;
            for(int j=0;j<m;j++)
            {
                zero.push_back(0);
            }
            visit.push_back(zero);
        }

        int count=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
                    if(str[i][j]=='@'&&visit[i][j]==0)
				    {
				        count++;
				        queue<pair<int,int> > node;
                        node.push(make_pair(i,j));
                        while(!node.empty())
                        {
                            int x=node.front().first;
                            int y=node.front().second;
                            visit[x][y]=1;
                            node.pop();
                            if(y+1<m)
                            {
                                if(str[x][y+1]=='@'&&visit[x][y+1]==0)
                                {
                                    node.push(make_pair(x,y+1));
                                }
                            }
                            if(y-1>=0)
                            {
                                if(str[x][y-1]=='@'&&visit[x][y-1]==0)
                                {
                                    node.push(make_pair(x,y-1));
                                }
                            }
                            if(x+1<n)
                            {
                                if(str[x+1][y]=='@'&&visit[x+1][y]==0)
                                {
                                    node.push(make_pair(x+1,y));
                                }
                            }
                            if(x+1<n&&y+1<m)
                            {
                                if(str[x+1][y+1]=='@'&&visit[x+1][y+1]==0)
                                {
                                    node.push(make_pair(x+1,y+1));
                                }
                            }
                            if(x+1<n&&y-1>=0)
                            {
                                if(str[x+1][y-1]=='@'&&visit[x+1][y-1]==0)
                                {
                                    node.push(make_pair(x+1,y-1));
                                }
                            }
                            if(x-1>=0)
                            {
                                if(str[x-1][y]=='@'&&visit[x-1][y]==0)
                                {
                                    node.push(make_pair(x-1,y));
                                }
                            }
                            if(x-1>=0&&y+1<m)
                            {
                                if(str[x-1][y+1]=='@'&&visit[x-1][y+1]==0)
                                {
                                    node.push(make_pair(x-1,y+1));
                                }
                            }
                            if(x-1>=0&&y-1>=0)
                            {
                                if(str[x-1][y-1]=='@'&&visit[x-1][y-1]==0)
                                {
                                    node.push(make_pair(x-1,y-1));
                                }
                            }
                        }
				    }
			}
		}
		cout<<count<<endl;

	}
}
