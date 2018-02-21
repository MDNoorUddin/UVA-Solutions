#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("c.txt","w",stdout);
	string str,temp;
	char c;
	while(getline(cin,str))
	{
		for(int i=0;i<str.length();i++)
		{
		    if(isalpha(str[i]))
			temp=temp+str[i];
			else
			{
				if(!temp.empty())
				{
					c=temp[0];
					if(c=='a'||c=='e'||c=='i'||c=='o'||(c)=='u'||c=='A'||c=='I'||c=='O'||(c)=='U'||c=='E')
					{
						cout<<temp;
						cout<<"ay";
					}
					else
					{
						for(int j=1;j<temp.length();j++)
						{
							cout<<temp[j];
						}
						cout<<temp[0];cout<<"ay";
					}
					temp.clear();
				}
				cout<<str[i];
			}	
		}
		if(!temp.empty())
				{
		c=temp[0];
		if(c=='a'||c=='e'||c=='i'||c=='o'||(c)=='u'||c=='A'||c=='B'||c=='I'||c=='O'||(c)=='U')
		{
			cout<<temp;
			cout<<"ay";
		}
		else
		{
			for(int j=1;j<temp.length();j++)
			{
					cout<<temp[j];
			}
				cout<<temp[0];cout<<"ay";
		}
		temp.clear();
	}
	cout<<endl;
	}
	return 0;
}
