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


using namespace std;


#define ll long long
#define input scanf
#define output printf 
#define Loop while
#define echo cout
#define ret return
#define MAX 999999999999999999
#define MIN 0
#define PI 3.1415

void sieve();
vector<bool> a(1001);
int main(int argc, char** argv) {
	
	//freopen("c.txt","w",stdout);
	sieve();
	int n,c;
	bool f=false;
	while(cin>>n>>c)
	{
		//if(f)cout<<endl;
		f=true;
		printf("%d %d: ",n,c);
		vector<int> primee;
		for(int i=1;i<=n;i++)
		{
			if(a[i])
			primee.push_back(i);
		}
		set<int> p;
		set<int>::iterator ij;
		if(primee.size()%2==0)
		{
			if(2*c-1<=primee.size()){
			int mid=primee.size()/2;
			int index=(2*c)/2;
			int j=mid;
			while(j>=mid-index)
			{
				p.insert(primee[j]);
				j--;
			}
			j=mid+1;
			while(j<=mid+index-1)
			{
				p.insert(primee[j]);
				j++;
			}
			ij=p.begin();
			int sp=p.size();
			int k=1;
			while(ij!=p.end())
			{
				cout<<*ij;
				ij++;
				if(k+1<=sp)
					cout<<" ";
					k++;
			}
				cout<<endl;
			}
			else
			{
				for(int i=0;i<primee.size()-1;i++)
				cout<<primee[i]<<" ";
				cout<<primee[primee.size()-1]<<endl;
			}
		}
		else
		{
			if(2*c-1<=primee.size())
			{
				
				int index=((2*c)-1)/2;
				//cout<<index<<" ";
				int mid=primee.size()/2;
				//cout<<mid<<endl;
				int j=mid;
				while(j>=mid-index)
				{
					p.insert(primee[j]);
					j--;
				}
				j=mid+1;
				while(j<=mid+index)
				{
					p.insert(primee[j]);
					j++;
				}
				ij=p.begin();
				int sp=p.size();
				int k=1;
				while(ij!=p.end())
				{
					cout<<*ij;
					ij++;
					if(k+1<=sp)
					cout<<" ";
					k++;
				}
				cout<<endl;
			}
			else
			{
				for(int i=0;i<primee.size()-1;i++)
				cout<<primee[i]<<" ";
				cout<<primee[primee.size()-1]<<endl;
			}
		}
		cout<<endl;
	}
	ret 0;
}

void sieve()
{
	fill(a.begin(),a.end(),true);
	 for (int p=2; p*p<=1000; p++)
    {
        if (a[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=1000; i += p)
                a[i] = false;
        }
    }
    /*for(int i=1;i<=100;i++)
	 {
	 	if(a[i])cout<<i<<" "<<a[i]<<endl;
	 }*/
}
