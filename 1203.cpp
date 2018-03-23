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
#include<bitset>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

typedef long long ll;
typedef vector<ll> vi;

#define PI acos(-1)
#define E 2.718281828459

int main(int argc, char** argv) {
	//freopen("c.txt","w",stdout);
	priority_queue< pair<int,int> > x;
	string str;
	int a,b;
	map<int,int> mp;
	while(cin>>str)
	{
		if(str=="#")break;
		cin>>a>>b;
		mp[a]=b;
		x.push(make_pair(-b,-a));
	}
	cin>>a;
	while(a--)
	{
		int d=abs(x.top().first);
		int e=abs(x.top().second);
		cout<<e<<endl;
		d=d+mp[e];
		x.pop();
		x.push(make_pair(-d,-e));
	}
	return 0;
}
