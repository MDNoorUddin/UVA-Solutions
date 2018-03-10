
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
#include<math.h>
#include <utility>
#include <sstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

typedef long long ll;

int main(int argc, char** argv) {
	//freopen("c.txt","w",stdout);
	int n;
	while(cin>>n&&n)
	{
		int st=n/4;
		if(n%4!=0)
		st++;
		printf("Printing order for %d pages:\n",n);
		if(n==1)
		{
			cout<<"Sheet 1, front: Blank, 1\n";
		}
		else
		{
			int s=st*4;
			//cout<<s<<endl;
			stack<int> l;
			stack<int> r;
			for(int i=s/2;i>=1;i--)
			{
				l.push(i);
			}
			for(int i=(s/2)+1;i<=n;i++)
			{
				r.push(i);
			}
			int high=s,low=1;
			int sheet=1;
			int count=0;
			int big,small;
			while(high!=(s/2))
			{
				count++;
				if(r.empty())
				{
					big=-1;
				}
				else if(r.top()==high)
				{
					big=1;
					r.pop();
				}
				else big=-1;
				if(l.empty())
				small=-1;
				else if(l.top()==low)
				{
					small=1;
					l.pop();
				}
				else small=-1;
				if(count==1)
				{
					cout<<"Sheet "<<sheet<<", front: ";
					if(big==-1)cout<<"Blank, ";
					else cout<<high<<", ";
					if(small==-1)cout<<"Blank\n";
					else cout<<low<<endl;
				}
				else
				{
					cout<<"Sheet "<<sheet<<", back : ";
					if(small==-1)cout<<"Blank, ";
					else cout<<low<<", ";
					if(big==-1)cout<<"Blank\n";
					else cout<<high<<endl;
				}
				if(count==2){
					count=0;
					sheet++;
				}
				low++;
				high--;
			}
		}
	}
	return 0;
}
