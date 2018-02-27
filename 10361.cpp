#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iterator>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int t;
	cin>>t;
	string a,b;
	getline(cin,a);
	while(t--)
	{
		getline(cin,a);getline(cin,b);
		string s2,s3,s4,s5;
		int i;
	    for(i=0;i<a.length();i++)
	    {
	    	if(a[i]=='<')
	    	{
	    		i++;
	    		break;
			}
	    	cout<<a[i];
		}
		for(;i<a.length();i++)
	    {
	    	if(a[i]=='>')
	    	{
	    		i++;
	    		break;
			}
	    	cout<<a[i];
	    	s2=s2+a[i];
		}
		for(;i<a.length();i++)
	    {
	    	if(a[i]=='<')
	    	{
	    		i++;
	    		break;
			}
	    	cout<<a[i];
	    	s3=s3+a[i];
		}
		for(;i<a.length();i++)
	    {
	    	if(a[i]=='>')
	    	{
	    		i++;
	    		break;
	    	}
	    	cout<<a[i];
	    	s4=s4+a[i];
		}
		for(;i<a.length();i++)
	    {
	    	cout<<a[i];
	    	s5=s5+a[i];
		}
		cout<<endl;
		
		for(int i=0;i<b.length();i++)
		{
			if(b[i]=='.')break;
			cout<<b[i];
		}
		cout<<s4<<s3<<s2<<s5<<endl;
	}	
	return 0;
}
