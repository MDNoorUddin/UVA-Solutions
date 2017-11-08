#include<bits/stdc++.h>
using namespace std;
int main()
{
	int b,s;
	int I=1;
	while(cin>>b>>s&&b&&s)
	{
		if(b==1)
		printf("Case %d: :-\\\n",I++);
		else if(b<=s)
		printf("Case %d: :-|\n",I++);
		else printf("Case %d: :-(\n",I++);
	}
	return 0;
}
