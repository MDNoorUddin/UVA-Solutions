#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("e.txt","w",stdout);
	string str;
	while(cin>>str)
	{
		int count=0;
		int temp=0;
		for(int i=str.length()-1;i>=0;i--)
		{
			if(str[i]=='N')
			{
				if(count==0)
				{
					count=100;
					break;
				}
				temp=0;
			}
			else if(str[i]=='C'||str[i]=='D'||str[i]=='E'||str[i]=='I')
			{
				/*if(count==2)
				{
					count=1;
				}
				else
				{
					count=100;
					break;
				}*/
				//if(count<=1||temp>2)
				if(count<=1)
				{
					count=100;
					break;
				}
				else
				{
					count--;
				}
				temp=0;
			}
			else
			{
				count++;temp++;
			}
		}
		if(count==1)cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
