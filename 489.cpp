#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("uva.txt","w",stdout);
	int t;
	string a,b;
	while(cin>>t&&t!=-1)
	{
		cin.ignore();
		cin>>a>>b;
		map<char,int> mp;
		map<char,int>::iterator it;
		map<char,bool> np;
		map<char,bool>::iterator jt;
		set<char> dup;
		for(int i=0;i<a.length();i++)
		{
			mp[a[i]]++;
			dup.insert(a[i]);
		}		
		int h=0;
		int w=0;
		for(int i=0;i<b.length();i++)
		{
			if(h==7)
			  break;
			if(w==dup.size())
			break;
			it=mp.find(b[i]);
			if(it==mp.end())
			{
				jt=np.find(b[i]);
				if(jt==np.end())
				{
					h++;
					np[b[i]]=true;
				}
			}
			else
			{
				jt=np.find(b[i]);
				if(jt==np.end())
				{
					w++;
					np[b[i]]=true;
				}
			}
		}
		if(h==7)
		{
			printf("Round %d\n",t);
            printf("You lose.\n");
		}
		else if(w==dup.size())
		{
			printf("Round %d\n",t);
            printf("You win.\n");
		}
		else
		{
			printf("Round %d\n",t);
            printf("You chickened out.\n");
		}
	}
	return 0;
}
