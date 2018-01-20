#include <iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<vector>
#include<math.h>
#include<string>
#include<list>
#include<string.h>

using namespace std;

#define ll long long
#define MAX 999999999999999999
#define MIN 0
#define PI acos(-1)
#define E 2.718281828459

int main(int argc, char** argv) {
	//freopen("c.txt","w",stdout);
	int t,n,temp;
	cin>>t;
	while(t--)
	{
		int du=0,no=0;
		for(int i=0;i<4;i++)
		{
			cin>>n;
			no+=(n%10);
			n/=10;
			temp=((n%10)*2);
			//cout<<temp<<endl;
			while(temp>0)
			{
				//cout<<temp%10<<endl;
				du+=temp%10;
				temp/=10;
			}
			n/=10;
			no+=(n%10);
			n/=10;
			temp=((n%10)*2);
			//cout<<temp<<endl;
			while(temp>0)
			{
				//cout<<temp%10<<endl; 
				du+=temp%10;
				temp/=10;
			}
		}
		if((du+no)%10!=0)cout<<"Invalid\n";
		else cout<<"Valid\n";
	}
	return 0;
}         
