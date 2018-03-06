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
	string str;
	while(cin>>str)
	{
		if(str=="0")break;
		printf("Original number was %s\n",str.c_str());
		map<int,int> mp;
		map<int,int>::iterator it;
		int count=0;
		while(true)
		{
			count++;
			string asc=str;
			sort(asc.begin(),asc.end());
			string des=str;
			sort(des.begin(),des.end(),greater<int>());
			stringstream f(asc);
			ll small;
			f>>small;
			stringstream F(des);
			ll big;
			F>>big;
			printf("%d - %d = %d\n",big,small,big-small);
			it=mp.find(big-small);
			if(it!=mp.end())
			{
				printf("Chain length %d\n",count);
				break;
			}
			else
			{
				mp[big-small]=1;
				stringstream g; // stringstream used for the conversion
                g << (big-small);//add the value of Number to the characters in the stream
                str=g.str();
			}
		}
		cout<<endl;
	}
}
