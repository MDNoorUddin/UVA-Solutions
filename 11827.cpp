#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b){
 return (b == 0 ? a : gcd(b, a % b));
}
int main()
{
	int t;
	scanf("%d",&t);
	cin.ignore();
	while(t--)
	{
		string str;
		getline(cin,str);
		stringstream f(str);
		vector<int> a;
		int g;
		while(f>>g)
		{
			a.push_back(g);
		}
		set<int> GCD;
		for(int i=0;i<a.size();i++)
		{
			for(int j=0;j<a.size();j++)
			{
				if(i!=j)
				{
					GCD.insert(gcd(a[i],a[j]));
				}
			}
		}
		set<int>::iterator it;
		it=GCD.end();
		it--;
		cout<<*it<<endl;
	}
	return 0;
}
