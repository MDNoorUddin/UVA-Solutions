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
#include<bits/stdc++.h>

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

int main(int argc, char** argv) {
	
	//freopen("c.txt","w",stdout);
	int book,k,I=1;
	while((scanf("%d",&book)==1))
	{
		int mn=9999999;
		vector<int> price(book);
		multiset<int> b;
		multiset<int>::iterator it;
		for(int i=0;i<book;i++)
		{
			scanf("%d",&k);
			b.insert(k);
			price[i]=k;
		}
		int money;
		scanf("%d",&money);
		int p,q,diff;
		/*for(multiset<int>::iterator i=b.begin();i!=b.end();i++)
		{
			//cout<<*i<<endl;
			diff=abs(money-*i);
			it=b.find(diff);
			if(it!=b.end())
			{
				if((abs(*it-*i))<mn)
				{
					mn=(*it-*i);
					p=*i;
					q=diff;
				}
			}
		}*/
		sort(price.begin(),price.end());
		for(int j=0;j<book;j++)
		{
			//cout<<*i<<endl;
			diff=abs(money-price[j]);
			for(int i=0;i<book;i++)
			{
				if(price[i]==diff&&j!=i)
			    { 
				if((abs(price[j]-price[i]))<mn&&price[j]<=price[i])
				{
					mn=abs(price[j]-price[i]);
					p=price[j];
					q=diff;
				}
			}
			}
		}
		printf("Peter should buy books whose prices are %d and %d.\n\n",p,q);
	}
	return 0;
}
