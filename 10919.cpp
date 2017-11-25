#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,m;
	while(cin>>k)
	{
		if(k==0)break;
		cin>>m;
		set<int> l;
		set<int>::iterator it;
		int a;
		for(int i=0;i<k;i++)
		{
			cin>>a;
			l.insert(a);
		}
		bool pre=true;
		int sub,g;
		for(int i=0;i<m;i++)
		{
			cin>>sub>>g;
			int sum=0;
			for(int j=0;j<sub;j++)
			{
				cin>>a;
				if(pre)
				{
					it=l.find(a);
					if(it!=l.end())
					   sum++;
				}
			}
			if(sum<g)
			   pre=false;
		}
		if(pre)
		cout<<"yes\n";
		else cout<<"no\n";
	}
	return 0;
}
