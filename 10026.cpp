#include<bits/stdc++.h>
using namespace std;
bool sortbysecdesc(const pair<double,int> &a,const pair<double,int> &b)
{
       return a.first>b.first;
}
int main()
{
	//freopen("ua.txt","w",stdout);
	int t;
	scanf("%d",&t);
	//cin.ignore();
	bool line=false;
	while(t--)
	{
		if(line)cout<<endl;
		line=true;
		int n;
		double time,cost;
		scanf("%d",&n);
		vector<pair<double,int> > job;
		double d;
		for(int i=1;i<=n;i++)
		{
			scanf("%lf%lf",&time,&cost);
			d=cost/time;
			job.push_back(make_pair(d,i));
		}
		sort(job.begin(),job.end(),sortbysecdesc);
		vector<pair<double,int> >::iterator i;
		i=job.begin();
		cout << job[0].second;
        for (int i = 1; i < n; ++i)
            cout << " " << job[i].second;
             cout << endl;
	}
}
