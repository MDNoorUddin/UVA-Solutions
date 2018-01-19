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
#include<string.h>

using namespace std;

#define ll long long
#define MAX 999999999999999999
#define MIN 0
#define PI acos(-1)
#define E 2.718281828459

string s[5];
string a[5];
string v[5];
string e[5];
string h[5];
string r[5];
string I[5];
string d[5];
string y[5];
string o[5];
string interval=".....";

void mnus(int n);
void pls(int n);
void sieve();
int main(int argc, char** argv) {
	//freopen("c.txt","w",stdout);
	sieve();
	int n;
	bool g=false;
	while(cin>>n&&n!=0)
	{
		//if(g)cout<<endl<<endl;
		g=true;
		if(n<0)mnus(n);
		else pls(n);
		cout<<endl<<endl;
	}
	return 0;
}
void sieve()
{
	s[0]="*****";
	s[1]="*....";
	s[2]="*****";
	s[3]="....*";
	s[4]="*****";

    a[0]=".***.";
    a[1]="*...*";
    a[2]="*****";
    a[3]="*...*";
    a[4]="*...*";
    
    v[0]="*...*";
    v[1]="*...*";
    v[2]="*...*";
    v[3]=".*.*.";
    v[4]="..*..";
    
    e[0]="*****";
    e[1]="*....";
	e[2]="***..";
    e[3]="*....";
    e[4]="*****";


    h[0]="*...*";
    h[1]="*...*";
    h[2]="*****";
    h[3]="*...*";
    h[4]="*...*";

    r[0]="*****";
    r[1]="*...*";
    r[2]="*****";
    r[3]="*.*..";
    r[4]="*..**";

    I[0]="*****";
    I[1]="..*..";
    I[2]="..*..";
    I[3]="..*..";
    I[4]="*****";

    d[0]="***..";
    d[1]="*..*.";
    d[2]="*...*";
    d[3]="*..*.";
    d[4]="***..";

    o[0]="*****";
    o[1]="*...*";
    o[2]="*...*";
    o[3]="*...*";
    o[4]="*****";

    y[0]="*...*";
    y[1]=".*.*.";
    y[2]="..*..";
    y[3]="..*..";
    y[4]="..*..";
}
void pls(int n)
{
	/**print save hridoy*/
	for(int i=0;i<5;i++)
	{
		for(int j=1;j<=n;j++){
		//print s
		for(int p=0;p<s[i].length();p++)
		{
		   for(int q=0;q<n;q++)cout<<s[i][p];	
		}
		for(int k=1;k<=n;k++)
		{
			cout<<".";
		}
		//print a
		for(int p=0;p<a[i].length();p++)
		{
		   for(int q=0;q<n;q++)cout<<a[i][p];	
		}
		for(int k=1;k<=n;k++)
		{
			cout<<".";
		}
		//print v
		for(int p=0;p<v[i].length();p++)
		{
		   for(int q=0;q<n;q++)cout<<v[i][p];	
		}
		for(int k=1;k<=n;k++)
		{
			cout<<".";
		}
		//print e
		for(int p=0;p<e[i].length();p++)
		{
		   for(int q=0;q<n;q++)cout<<e[i][p];	
		}
		//printf interval
		for(int k=1;k<=n;k++)
		{
			cout<<"...";
		}
		
		//print h
		for(int p=0;p<h[i].length();p++)
		{
		   for(int q=0;q<n;q++)cout<<h[i][p];	
		}
		for(int k=1;k<=n;k++)
		{
			cout<<".";
		}
		//print r
		for(int p=0;p<r[i].length();p++)
		{
		   for(int q=0;q<n;q++)cout<<r[i][p];	
		}
		for(int k=1;k<=n;k++)
		{
			cout<<".";
		}
		//print I
		for(int p=0;p<I[i].length();p++)
		{
		   for(int q=0;q<n;q++)cout<<I[i][p];	
		}
		for(int k=1;k<=n;k++)
		{
			cout<<".";
		}
		
		//print d
		for(int p=0;p<d[i].length();p++)
		{
		   for(int q=0;q<n;q++)cout<<d[i][p];	
		}
		for(int k=1;k<=n;k++)
		{
			cout<<".";
		}
		
		//print o
		for(int p=0;p<o[i].length();p++)
		{
		   for(int q=0;q<n;q++)cout<<o[i][p];	
		}
		for(int k=1;k<=n;k++)
		{
			cout<<".";
		}
		
		//print y
		for(int p=0;p<y[i].length();p++)
		{
		   for(int q=0;q<n;q++)cout<<y[i][p];	
		}
		cout<<endl;
	}
	}
} 

void mnus(int n)
{
	n=abs(n);
	//printf s
	for(int i=0;i<5;i++)
	{
		for(int j=1;j<=n;j++){
		//print s
		for(int p=0;p<s[i].length();p++)
		{
		   for(int q=0;q<n;q++)cout<<s[i][p];	
		}
		cout<<endl;
    	}
   }
	//print interval
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++){
			cout<<interval;
		}
		cout<<endl;
	}
	
	//printf a
	for(int i=0;i<5;i++)
	{
		for(int j=1;j<=n;j++){
		//print s
		for(int p=0;p<a[i].length();p++)
		{
		   for(int q=0;q<n;q++)cout<<a[i][p];	
		}
		cout<<endl;
    	}
   }
	//print interval
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++){
			cout<<interval;
		}
		cout<<endl;
	}
	//printf v
	for(int i=0;i<5;i++)
	{
		for(int j=1;j<=n;j++){
		//print s
		for(int p=0;p<v[i].length();p++)
		{
		   for(int q=0;q<n;q++)cout<<v[i][p];	
		}
		cout<<endl;
    	}
   }
	//print interval
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++){
			cout<<interval;
		}
		cout<<endl;
	}
	//printf e
	for(int i=0;i<5;i++)
	{
		for(int j=1;j<=n;j++){
		//print s
		for(int p=0;p<e[i].length();p++)
		{
		   for(int q=0;q<n;q++)cout<<e[i][p];	
		}
		cout<<endl;
    	}
   }
	//print interval
	for(int i=1;i<=n;i++)
	{
		for(int i=1;i<=3;i++){
			for(int j=1;j<=n;j++)
			{
				cout<<interval;
			}
			cout<<endl;
		}
	}
	//printf h
	for(int i=0;i<5;i++)
	{
		for(int j=1;j<=n;j++){
		//print s
		for(int p=0;p<h[i].length();p++)
		{
		   for(int q=0;q<n;q++)cout<<h[i][p];	
		}
		cout<<endl;
    	}
   }
	//print interval
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++){
			cout<<interval;
		}
		cout<<endl;
	}
	//printf r
	for(int i=0;i<5;i++)
	{
		for(int j=1;j<=n;j++){
		//print s
		for(int p=0;p<r[i].length();p++)
		{
		   for(int q=0;q<n;q++)cout<<r[i][p];	
		}
		cout<<endl;
    	}
   }
	//print interval
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++){
			cout<<interval;
		}
		cout<<endl;
	}
	//printf I
	for(int i=0;i<5;i++)
	{
		for(int j=1;j<=n;j++){
		//print s
		for(int p=0;p<I[i].length();p++)
		{
		   for(int q=0;q<n;q++)cout<<I[i][p];	
		}
		cout<<endl;
    	}
   }
	//print interval
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++){
			cout<<interval;
		}
		cout<<endl;
	}
	//printf d
	for(int i=0;i<5;i++)
	{
		for(int j=1;j<=n;j++){
		//print s
		for(int p=0;p<d[i].length();p++)
		{
		   for(int q=0;q<n;q++)cout<<d[i][p];	
		}
		cout<<endl;
    	}
   }
	//print interval
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++){
			cout<<interval;
		}
		cout<<endl;
	}
	//printf o
	for(int i=0;i<5;i++)
	{
		for(int j=1;j<=n;j++){
		for(int p=0;p<o[i].length();p++)
		{
		   for(int q=0;q<n;q++)cout<<o[i][p];	
		}
		cout<<endl;
    	}
   }
	//print interval
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++){
			cout<<interval;
		}
		cout<<endl;
	}
	//printf y
	for(int i=0;i<5;i++)
	{
		for(int j=1;j<=n;j++){
		//print s
		for(int p=0;p<y[i].length();p++)
		{
		   for(int q=0;q<n;q++)cout<<y[i][p];	
		}
		cout<<endl;
    	}
   }
	return;
}         #include <iostream>
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
#include<string.h>

using namespace std;

#define ll long long
#define MAX 999999999999999999
#define MIN 0
#define PI acos(-1)
#define E 2.718281828459

string s[5];
string a[5];
string v[5];
string e[5];
string h[5];
string r[5];
string I[5];
string d[5];
string y[5];
string o[5];
string interval=".....";

void mnus(int n);
void pls(int n);
void sieve();
int main(int argc, char** argv) {
	//freopen("c.txt","w",stdout);
	sieve();
	int n;
	bool g=false;
	while(cin>>n&&n!=0)
	{
		//if(g)cout<<endl<<endl;
		g=true;
		if(n<0)mnus(n);
		else pls(n);
		cout<<endl<<endl;
	}
	return 0;
}
void sieve()
{
	s[0]="*****";
	s[1]="*....";
	s[2]="*****";
	s[3]="....*";
	s[4]="*****";

    a[0]=".***.";
    a[1]="*...*";
    a[2]="*****";
    a[3]="*...*";
    a[4]="*...*";
    
    v[0]="*...*";
    v[1]="*...*";
    v[2]="*...*";
    v[3]=".*.*.";
    v[4]="..*..";
    
    e[0]="*****";
    e[1]="*....";
	e[2]="***..";
    e[3]="*....";
    e[4]="*****";


    h[0]="*...*";
    h[1]="*...*";
    h[2]="*****";
    h[3]="*...*";
    h[4]="*...*";

    r[0]="*****";
    r[1]="*...*";
    r[2]="*****";
    r[3]="*.*..";
    r[4]="*..**";

    I[0]="*****";
    I[1]="..*..";
    I[2]="..*..";
    I[3]="..*..";
    I[4]="*****";

    d[0]="***..";
    d[1]="*..*.";
    d[2]="*...*";
    d[3]="*..*.";
    d[4]="***..";

    o[0]="*****";
    o[1]="*...*";
    o[2]="*...*";
    o[3]="*...*";
    o[4]="*****";

    y[0]="*...*";
    y[1]=".*.*.";
    y[2]="..*..";
    y[3]="..*..";
    y[4]="..*..";
}
void pls(int n)
{
	/**print save hridoy*/
	for(int i=0;i<5;i++)
	{
		for(int j=1;j<=n;j++){
		//print s
		for(int p=0;p<s[i].length();p++)
		{
		   for(int q=0;q<n;q++)cout<<s[i][p];	
		}
		for(int k=1;k<=n;k++)
		{
			cout<<".";
		}
		//print a
		for(int p=0;p<a[i].length();p++)
		{
		   for(int q=0;q<n;q++)cout<<a[i][p];	
		}
		for(int k=1;k<=n;k++)
		{
			cout<<".";
		}
		//print v
		for(int p=0;p<v[i].length();p++)
		{
		   for(int q=0;q<n;q++)cout<<v[i][p];	
		}
		for(int k=1;k<=n;k++)
		{
			cout<<".";
		}
		//print e
		for(int p=0;p<e[i].length();p++)
		{
		   for(int q=0;q<n;q++)cout<<e[i][p];	
		}
		//printf interval
		for(int k=1;k<=n;k++)
		{
			cout<<"...";
		}
		
		//print h
		for(int p=0;p<h[i].length();p++)
		{
		   for(int q=0;q<n;q++)cout<<h[i][p];	
		}
		for(int k=1;k<=n;k++)
		{
			cout<<".";
		}
		//print r
		for(int p=0;p<r[i].length();p++)
		{
		   for(int q=0;q<n;q++)cout<<r[i][p];	
		}
		for(int k=1;k<=n;k++)
		{
			cout<<".";
		}
		//print I
		for(int p=0;p<I[i].length();p++)
		{
		   for(int q=0;q<n;q++)cout<<I[i][p];	
		}
		for(int k=1;k<=n;k++)
		{
			cout<<".";
		}
		
		//print d
		for(int p=0;p<d[i].length();p++)
		{
		   for(int q=0;q<n;q++)cout<<d[i][p];	
		}
		for(int k=1;k<=n;k++)
		{
			cout<<".";
		}
		
		//print o
		for(int p=0;p<o[i].length();p++)
		{
		   for(int q=0;q<n;q++)cout<<o[i][p];	
		}
		for(int k=1;k<=n;k++)
		{
			cout<<".";
		}
		
		//print y
		for(int p=0;p<y[i].length();p++)
		{
		   for(int q=0;q<n;q++)cout<<y[i][p];	
		}
		cout<<endl;
	}
	}
} 

void mnus(int n)
{
	n=abs(n);
	//printf s
	for(int i=0;i<5;i++)
	{
		for(int j=1;j<=n;j++){
		//print s
		for(int p=0;p<s[i].length();p++)
		{
		   for(int q=0;q<n;q++)cout<<s[i][p];	
		}
		cout<<endl;
    	}
   }
	//print interval
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++){
			cout<<interval;
		}
		cout<<endl;
	}
	
	//printf a
	for(int i=0;i<5;i++)
	{
		for(int j=1;j<=n;j++){
		//print s
		for(int p=0;p<a[i].length();p++)
		{
		   for(int q=0;q<n;q++)cout<<a[i][p];	
		}
		cout<<endl;
    	}
   }
	//print interval
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++){
			cout<<interval;
		}
		cout<<endl;
	}
	//printf v
	for(int i=0;i<5;i++)
	{
		for(int j=1;j<=n;j++){
		//print s
		for(int p=0;p<v[i].length();p++)
		{
		   for(int q=0;q<n;q++)cout<<v[i][p];	
		}
		cout<<endl;
    	}
   }
	//print interval
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++){
			cout<<interval;
		}
		cout<<endl;
	}
	//printf e
	for(int i=0;i<5;i++)
	{
		for(int j=1;j<=n;j++){
		//print s
		for(int p=0;p<e[i].length();p++)
		{
		   for(int q=0;q<n;q++)cout<<e[i][p];	
		}
		cout<<endl;
    	}
   }
	//print interval
	for(int i=1;i<=n;i++)
	{
		for(int i=1;i<=3;i++){
			for(int j=1;j<=n;j++)
			{
				cout<<interval;
			}
			cout<<endl;
		}
	}
	//printf h
	for(int i=0;i<5;i++)
	{
		for(int j=1;j<=n;j++){
		//print s
		for(int p=0;p<h[i].length();p++)
		{
		   for(int q=0;q<n;q++)cout<<h[i][p];	
		}
		cout<<endl;
    	}
   }
	//print interval
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++){
			cout<<interval;
		}
		cout<<endl;
	}
	//printf r
	for(int i=0;i<5;i++)
	{
		for(int j=1;j<=n;j++){
		//print s
		for(int p=0;p<r[i].length();p++)
		{
		   for(int q=0;q<n;q++)cout<<r[i][p];	
		}
		cout<<endl;
    	}
   }
	//print interval
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++){
			cout<<interval;
		}
		cout<<endl;
	}
	//printf I
	for(int i=0;i<5;i++)
	{
		for(int j=1;j<=n;j++){
		//print s
		for(int p=0;p<I[i].length();p++)
		{
		   for(int q=0;q<n;q++)cout<<I[i][p];	
		}
		cout<<endl;
    	}
   }
	//print interval
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++){
			cout<<interval;
		}
		cout<<endl;
	}
	//printf d
	for(int i=0;i<5;i++)
	{
		for(int j=1;j<=n;j++){
		//print s
		for(int p=0;p<d[i].length();p++)
		{
		   for(int q=0;q<n;q++)cout<<d[i][p];	
		}
		cout<<endl;
    	}
   }
	//print interval
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++){
			cout<<interval;
		}
		cout<<endl;
	}
	//printf o
	for(int i=0;i<5;i++)
	{
		for(int j=1;j<=n;j++){
		for(int p=0;p<o[i].length();p++)
		{
		   for(int q=0;q<n;q++)cout<<o[i][p];	
		}
		cout<<endl;
    	}
   }
	//print interval
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++){
			cout<<interval;
		}
		cout<<endl;
	}
	//printf y
	for(int i=0;i<5;i++)
	{
		for(int j=1;j<=n;j++){
		//print s
		for(int p=0;p<y[i].length();p++)
		{
		   for(int q=0;q<n;q++)cout<<y[i][p];	
		}
		cout<<endl;
    	}
   }
	return;
}         
