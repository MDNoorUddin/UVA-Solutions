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
    int t;
    cin>>t;
    cin.ignore();
    int c=0;
	while(t--)
	{

		string test;
		vector<string> str;
		if(c==0)
		getline(cin,test);
		if(c!=0)cout<<endl;
	    c++;
		while(true)
        {
            getline(cin,test);
            if(test=="")break;
            str.push_back(test);
        }
		vector<vector<int> > visit;
		for(int i=0;i<100;i++)
        {
            vector<int> zero;
            for(int j=0;j<100;j++)
            {
                zero.push_back(0);
            }
            visit.push_back(zero);
        }
        //cout<<"size "<<str.size()<<endl;
        int MAX=0;
        int count=0;
		for(int i=0;i<str.size();i++)
		{
			for(int j=0;j<str[i].length();j++)
			{
			    int sum=0;
                    if(str[i][j]=='1')
				    {
				        //cout<<"-------------------------\n";
				        count++;
				        queue<pair<int,int> > node;
                        node.push(make_pair(i,j));
                        while(!node.empty())
                        {

                            int x=node.front().first;
                            int y=node.front().second;
                            node.pop();
                            if(str[x][y]=='0')continue;
                            sum++;
                            //cout<<x<<"->"<<y<<endl;

                            str[x][y]='0';
                            if(y+1<str[i].length())
                            {
                                //cout<<1<<endl;
                                if(str[x][y+1]=='1')
                                {
                                    node.push(make_pair(x,y+1));
                                }
                            }
                            if(y-1>=0)
                            {
                                if(str[x][y-1]=='1')
                                {
                                    node.push(make_pair(x,y-1));
                                }
                            }
                            if(x+1<str.size())
                            {
                                if(str[x+1][y]=='1')
                                {
                                    node.push(make_pair(x+1,y));
                                }
                            }
                            if(x+1<str.size()&&y+1<str[i].length())
                            {
                                if(str[x+1][y+1]=='1')
                                {
                                    node.push(make_pair(x+1,y+1));
                                }
                            }
                            if(x+1<str.size()&&y-1>=0)
                            {
                                if(str[x+1][y-1]=='1')
                                {
                                    node.push(make_pair(x+1,y-1));
                                }
                            }
                            if(x-1>=0)
                            {
                                if(str[x-1][y]=='1')
                                {
                                    node.push(make_pair(x-1,y));
                                }
                            }
                            if(x-1>=0&&y+1<str[i].length())
                            {
                                if(str[x-1][y+1]=='1')
                                {
                                    node.push(make_pair(x-1,y+1));
                                }
                            }
                            if(x-1>=0&&y-1>=0)
                            {
                                if(str[x-1][y-1]=='1')
                                {
                                    node.push(make_pair(x-1,y-1));
                                }
                            }
                        }

                        //cout<<"-------------------------\n";

				    }
				    if(sum>MAX)
                    {
                        MAX=sum;
                    }
                    sum=0;
			}
		}
		//cout<<MAX<<" "<<count<<endl;
		cout<<MAX<<endl;

	}
	return 0;
}
