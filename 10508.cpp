#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("e.txt","w",stdout);
	int m,n;
	while((scanf("%d%d",&m,&n))==2)
	{
		cin.ignore();
		string str,k;
		cin>>str>>k;
		vector<string> a;
		string temp;
		n-=1;
		for(int i=0;i<n;i++)
		{
			cin>>temp;
			a.push_back(temp);
		}
		vector<bool> b(a.size());
		fill(b.begin(),b.end(),false);
		printf("%s\n",str.c_str());
		string curr=str;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<a.size();j++)
			{
				if(!b[j])
				{
					int c=0;
					for(int k=0;k<a[j].length();k++)
					{
						if(curr[k]!=a[j][k])c++;
					}
					//cout<<curr<<" "<<a[j]<<c<<endl;
					if(c==1)
					{
						cout<<a[j]<<endl;
						curr=a[j];
						b[j]=true;
					}
				}
			}
		}
		cout<<k<<endl;
	}
	return 0;
}
