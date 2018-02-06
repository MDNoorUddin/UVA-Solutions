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
	int row,column;
	while(cin>>row>>column&&row&&column)
	{
		cin.ignore();
		char a[row+2][column+2];
		memset(a,'.',sizeof(a));
		int R=row+2;
		int C=column+2;
		for(int i=1;i<=row;i++)
		{
			for(int j=1;j<=column;j++)
			{
				cin>>a[i][j];
				//scanf("%c",&a[i][j]);
			}
		}
		
		/*for(int i=0;i<R;i++)
		{
			for(int j=0;j<C;j++)
			{
				printf("%c",a[i][j]);
			}
			printf("\n");
		}*/
		int count=0;
		for(int i=1;i<=row;i++)
		{
			for(int j=1;j<=column;j++)
			{
				if(a[i][j]=='*'){
				if(a[i][j-1]=='.'&&a[i][j+1]=='.'&&a[i-1][j-1]=='.'&&a[i-1][j+1]=='.'&&a[i-1][j]=='.'&&a[i+1][j-1]=='.'
				&&a[i+1][j+1]=='.'&&a[i+1][j]=='.')count++;
			}
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
