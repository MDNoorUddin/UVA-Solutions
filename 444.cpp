#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("c.txt","w",stdout);
	string str;
	int d;
	while(getline(cin,str))
	{
		string total;
		if(isalpha(str[0])||str[0]=='!'||str[0] ==','||str[0] =='.'||str[0] ==':'||str[0]==';') 
		{
			for(int i=0;i<str.length();i++)
			{
				d=str[i];
				stringstream f;
				string temp;
				f<<d;
				f>>temp;
				//reverse(temp.begin(),temp.end());
				//cout<<temp;
				total=total+temp;
			}
			reverse(total.begin(),total.end());
			cout<<total;
			cout<<endl;
		}
		else
		{
			int d;
			for(int i=str.length()-1;i>=0;)
			{
				string temp;
				int count=1;
				stringstream f;
				temp=temp+str[i];
				temp=temp+str[i-1];
				f<<temp;
				f>>d;
				if(d<=22)
				{
					temp=temp+str[i-2];
					stringstream k(temp);
					k>>d;
					printf("%c",d);
					i-=3;
				}
				else
				{
					printf("%c",d);
					i-=2;
				}
			}
			cout<<endl;
		}
	}
	return 0;
}
