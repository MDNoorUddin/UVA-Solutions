#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<vector>
#include<string>
#include<algorithm>
#include<map>
#include<iterator>
#include<set>
#include<queue>
#include<bits/stdc++.h>

using namespace std;

int I=1;
typedef long long ll;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t,n;
	cin>>t;
	while(t--)
	{
		int n,boxes;
		cin>>n>>boxes;
		int sum=0;
		for(int i=1;i<=boxes;i++)
		{
			int c;
			cin>>c;
			vector<int> a(c);
			for(int j=0;j<c;j++)
			{
				cin>>a[j];
			}
			int mul=a[c-1]%n;
			for(int j=c-2;j>=0;j--)
			{
				mul=(mul*(a[j]%n))%n;
			}
			sum+=mul;
		}
		cout<<sum%n<<endl;
	}
}
