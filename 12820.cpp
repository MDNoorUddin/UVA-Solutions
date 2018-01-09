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

int main(int argc, char** argv) {
	
	//freopen("c.txt","w",stdout);
	int t;
	int I=1;
	while(cin>>t){
	  string str;
	  int count=0;
	  cin.ignore();
	  while(t--)
	  {
	  	    vector<bool> a(26);
	  	    fill(a.begin(),a.end(),false);
	  	    vector<int> A(26);
	  	    fill(A.begin(),A.end(),0);
	    	cin>>str;
	    	for(int i=0;i<str.length();i++)
	    	{
	    		a[str[i]-97]=true;
	    		A[str[i]-97]++;
			}
			int sum=0;
			for(int i=0;i<26;i++)
			{
				if(a[i])sum++;
			}
			if(sum>1)
			{
				sort(A.begin(),A.end());
				int i=0;
				while(true)
				{
					if(A[i]!=0){
						break;
					}
					i++;
				}
				set<int> v;
				int p=26-i;
				for(int j=i;j<26;j++)
				{
					v.insert(A[j]);
				}
				//cout<<p<<" "<<v.size()<<endl;
				if(p==v.size())
				{
					count++;
				}
			}
	  }	
	  printf("Case %d: %d\n",I++,count);
    }
	return 0;
}                   
