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
	string a,b;
	while(getline(cin,a))
	{
		getline(cin,b);
			std::stringstream f(a);
			set<int> s,AA,BB;
			set<int>::iterator it;
			int str,A=0,B=0;
			while(f>>str)
			{
				AA.insert(str);
				s.insert(str);
			}
			std::stringstream p(b);
			while(p>>str)
			{
				BB.insert(str);
				s.insert(str);
			}
			if(AA.size()+BB.size()==s.size())printf("A and B are disjoint\n");
			else if(AA.size()==s.size()&&BB.size()==s.size())printf("A equals B\n");
			else if(AA.size()==s.size())printf("B is a proper subset of A\n");
			else if(BB.size()==s.size())printf("A is a proper subset of B\n");
			else printf("I'm confused!\n");
	}
	return 0;
}

