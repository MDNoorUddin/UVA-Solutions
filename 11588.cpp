#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iterator>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int t;
	scanf("%d",&t);
	int R,C,M,N;
	int I=1;
	while(t--)
	{
		scanf("%d%d%d%d",&R,&C,&M,&N);
		string str;
		vector<int> a(26);
		fill(a.begin(),a.end(),0);
		int total=0;
		for(int i=0;i<R;i++)
		{
			cin>>str;
			total+=str.length();
			for(int j=0;j<str.length();j++)
			{
				a[str[j]-65]++;
			}
		}
		sort(a.begin(),a.end(),greater<int>());
		int mx=a[0];
		int count=0;
		for(int i=0;i<a.size();i++)
		{
			if(a[i]==mx)count++;
			else break;
		}
		printf("Case %d: ",I++);
		cout<<(count*M*mx)+((total-(count*mx))*N);
		cout<<endl;
	}
	return 0;
}
