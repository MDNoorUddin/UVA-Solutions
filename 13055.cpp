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

vector<int> s(10000);
void sort()
{
	for(int i=0;i<10000;i++)
	s[i]=i+1;
	return;
}
int main(int argc, char** argv) {
	
	//freopen("c.txt","w",stdout);
	int t;
	cin>>t;
	cin.ignore();
	stack<string> dream;
	string str;
	while(t--)
	{
		cin>>str;
		if(str[0]=='S')
		{
			cin>>str;
			dream.push(str);
		}
		else if(str[0]=='T')
		{
			if(dream.empty())
			printf("Not in a dream\n");
			else
			cout<<dream.top()<<endl;
		}
		else{
			if(!dream.empty())
			dream.pop();
		}
	}
	return 0;
}
