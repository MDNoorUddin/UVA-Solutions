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
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

typedef long long ll;
int main(int argc, char** argv) {
	//freopen("c.txt","w",stdout);
	int t;
	cin>>t;
	int n,l;
	while(t--)
	{
		cin>>l>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++)
		cin>>a[i];
		sort(a.begin(),a.end());
		int mid=l/2;
		int minn;
		ll ans;
		ll diff = 99999999;
		for(int i=0;i<a.size();i++)
		{
			if(abs(a[i]-mid)<diff)
			{
				diff=abs(a[i]-mid);
				minn=a[i];
			}
		}
		//cout<<diff<<" "<<mid<<" ";
		if(minn<=mid)
		ans=minn;
		else
		ans=l-minn;
		cout<<ans;
		ll maxx=max((a[a.size()-1]),(l-a[0]));
		cout<<" "<<maxx<<endl;
	}
	return 0;
}
