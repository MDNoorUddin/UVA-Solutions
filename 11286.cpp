#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(cin>>n&&n)
	{
		map<vector<int>,int> a;
		map<vector<int>,int>::iterator it;
		int maxm=0;
		while (n--){
			vector<int> V(5);
			for(int i=0;i<5;i++)
				cin >> V[i];
			sort(V.begin(), V.end());
			a[V]++;
			maxm = max(maxm,a[V]);
        }
        int count=0;
        for(it=a.begin();it!=a.end();it++)
        {
        	if(it->second==maxm)count+=it->second;
		}
		cout<<count<<endl;
	}
}
