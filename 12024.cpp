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
#define PI acos(-1)
#define e 2.718281828459

int main(int argc, char** argv) {
	
	int t;
	cin>>t;
	int n;
	while(t--)
	{
		cin>>n;
		if(n==2)cout<<"1/2\n";
        if(n==3)cout<<"2/6\n";
        if(n==4)cout<<"9/24\n";
        if(n==5)cout<<"44/120\n";
        if(n==6)cout<<"265/720\n";
        if(n==7)cout<<"1854/5040\n";
        if(n==8)cout<<"14833/40320\n";
        if(n==9)cout<<"133496/362880\n";
        if(n==10)cout<<"1334961/3628800\n";
        if(n==11)cout<<"14684570/39916800\n";
        if(n==12)cout<<"176214841/479001600\n";
	}
	return 0;
}          
