#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("c.txt","w",stdout);
	unsigned long long c;
	while(cin>>c)
	{
		if(c==0)break;
		unsigned long long N=(c*10)/9;
		vector<unsigned long long> a;
		a.push_back(N);
		N--;
		while(true)
		{
			if(N-(N/10)==c)
			{
				a.push_back(N);
		        N--;
			}
			else
			break;
		}
		sort(a.begin(),a.end());
		cout<<a[0];
		for(int i=1;i<a.size();i++)cout<<" "<<a[i];
		cout<<endl;
	}
	return 0;
}
