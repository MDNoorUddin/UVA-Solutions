#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iterator>
#include<map>
#include<set>
#include<string>
#include<cstring>
#include<cstdio>
#include<stack>
#include<queue>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

typedef long long ll;

int main(int argc, char** argv) {
	freopen("c.txt","w",stdout);
	string str;
	int t;
	scanf("%d",&t);
	getline(cin,str);
	while(t--)
	{
		cin>>str;
		stack<ll> mx;
		stack<ll> mn;
		int sum=0;int temp=1;
		bool plus=true,product=false;
		for(int i=0;i<str.length();i++)
		{
			if(str[i]=='+'||str[i]=='*')
			{
				//cout<<sum<<endl;
				if(mx.empty())
				{
					
					mx.push(sum);
					mn.push(sum);
					sum=0;temp=1;
				}
				else
				{
					if(plus)
					{
						mx.top()=mx.top()+sum;
						mn.push(sum);
						sum=0;
						temp=1;
					}
					if(product)
					{
						mn.top()=mn.top()*sum;
						mx.push(sum);
						sum=0;
						temp=1;
					}
				}
				if(str[i]=='+'){
						plus=true;;product=false;
					}
					else {
						product=true;plus=false;
					}
			}
			else
			{
				sum=(sum*temp)+(str[i]-48);
				temp*=10;
			}
		}
		//cout<<sum<<endl;
		if(mx.empty())
		{
		         	mx.push(sum);
					mn.push(sum);
					sum=0;temp=1;
		}
		else{
		if(plus)
		{
  				mx.top()=mx.top()+sum;
				mn.push(sum);
				sum=0;
				temp=1;
		}
		if(product)
		{
			 mn.top()=mn.top()*sum;
			mx.push(sum);
			sum=0;
			temp=1;
			}
		}
		long long minimum=0;
		while(!mn.empty())
		{
			minimum+=mn.top();
			mn.pop();
		}
		long long maxx=1;
		while(!mx.empty())
		{
			maxx*=mx.top();
			mx.pop();
		}
		printf("The maximum and minimum are %lld and %lld.\n",maxx,minimum);
	}
	return 0;
}
