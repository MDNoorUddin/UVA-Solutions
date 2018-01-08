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
		std::stringstream f,F;
		f<<a;
		string s;
		string temp;
		while(!f.eof())
		{
			f>>s;
			temp=temp+s[0];
		}
		F<<b;
		string S,te;
		while(!F.eof())
		{
			F>>S;
			te=te+S[0];
		}
		if(temp==te)cout<<"yes\n";
		else cout<<"no\n";
	}
}                   
