#include<iostream>
#include<vector>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
#include<map>
#include<set>
#include<stdio.h>
#include<math.h>

typedef long long ll;

#define PI acos(-1)

#define E 2.718281828459

using namespace std;


int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		string str;
		int med;
		int pr=1;
		priority_queue<pair < ll, pair<int,string >  > > a;
		map<int,int> mp;
		while(n--)
		{
			cin>>str>>med;
			a.push(make_pair(-med,make_pair(-pr,str)));
			mp[pr]=-med;
			pr++;
		}
		while(k--)
		{
			//cout<<a.top().first<<" "<<a.top().second.second;
			ll x=a.top().first;
			int y=a.top().second.first;
			str=a.top().second.second;
			cout<<abs(x)<< " " << str<<endl;
			a.pop();
			x =  x +mp[abs(y)];
			//cout<<"map "<<mp[abs(y)]<<" "<<y<<endl;
			a.push(make_pair(x,make_pair(y,str)));
		}
	}
	return 0;
}
