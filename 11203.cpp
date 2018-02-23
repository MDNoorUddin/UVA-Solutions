#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("c.txt","w",stdout);
	int t;
	scanf("%d",&t);
	cin.ignore();
	string str;
	while(t--)
	{
		cin>>str;
		bool theorem=true;
		int i=0;
		int count=0;
		int b_m,b_e,e_a_b;
		while(true)
		{
			if(i==str.length())
			{
				theorem=false;
				break;
			}
			if(str[i]=='M')
			{
				i++;
				break;
			}
			else if(str[i]=='?')
			{
				i++;
				count++;
				continue;
			}
			else
			{
				i++;
				theorem=false;
				break;
			}
		}
		if(count==0||!theorem)
		{
			cout<<"no-theorem\n";
		}
		else
		{
			b_m=count;
			count=0;
			while(true)
			{
				if(i==str.length())
			   {
				theorem=false;
				break;
			   }
				if(str[i]=='E')
			    {
				i++;
				break;
			    }  
			else if(str[i]=='?')
			  {
				i++;
				count++;
			  }
			else
			  {
				i++;
				theorem=false;
				break;
			  }
			}
			if(!theorem||count==0)
			{
				cout<<"no-theorem\n";
			}
			else
			{
				b_e=count;
				count=0;
			    while(true)
			    {
				   if(i==str.length())
			       {
			        	break;
			       }  
			       if(str[i]=='?')
			      {
				      i++;
				      count++;
			      }
			       else
			     {
				  i++;
				   theorem=false;
				  break;
			  }
			}
			if(!theorem||count<=1)
			{
				cout<<"no-theorem\n";
			}
			else
			{
				e_a_b=count;
				if(b_m>=e_a_b)cout<<"no-theorem\n";
				else
				{
					if((e_a_b-b_m)==b_e)cout<<"theorem\n";
					else cout<<"no-theorem\n";
				}
			}
			}
		}
	}
	return 0;
}
