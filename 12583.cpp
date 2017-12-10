#include <iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<stack>
#include<queue>
#include<set>
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
int main(int argc, char** argv) {
	//freopen("c.txt","w",stdout);
    int t;
    cin>>t;
    int I=1;
    while(t--)
    {
    	int day,rem;
    	string str;
    	cin>>day>>rem>>str;
    	cin.ignore();
    	set<char> b;
    	set<char>::iterator it;
    	for(int i=0;i<day;i++)
    	{
    		b.insert(str[i]);
		}
		it=b.begin();
		int total=0;
		while(it!=b.end())
		{
			int sum=0;
			int index=-1;
			for(int i=0;i<day;i++)
			{
				if(str[i]==*it)
				{
					//cout<<*it<<" "<<str[i]<<endl;
					if(index==-1)
					index=i+1;
					else
					{
					  	if(i+1-index<=rem)
					  	{
					  		sum++;
						}
						index=i+1;
					}
				}
			}
			total+=sum;
			it++;
		}
		//cout<<total<<endl;
		printf("Case %d: %d\n",I++,total);
	}
	ret 0;
}

