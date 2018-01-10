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
	//freopen("c.txt","w",stdout);
	int n;
	string str;
	int I=1;
	while((scanf("%d",&n)==1)&&n)
	{
		cin.ignore();
		printf("Case %d:\n",I++);
		printf("#include<string.h>\n");
        printf("#include<stdio.h>\n");
        printf("int main()\n{\n");
        for(int i=1;i<=n;i++)
        {
        	getline(cin,str);
        	printf("printf(\"");
        	char f='\\';
        	//cout<<f<<endl;
        	for(int j=0;j<str.length();j++)
        	{
        		//cout<<"decimal ";
        		//printf("%d\n",str[j]);
        		if(str[j]=='\"'){
        			//cout<<"in";
        			cout<<f;
        			printf("\"");
        			//sprintf("\\");
				}
				else if(str[j]=='\\')
				{
					printf("\\");
					printf("\\");
				}
				else cout<<str[j];
			}
			printf("\\n\");\n");
			//printf("\\n\\n");");
			//printf("printf(\"\\n\");");
		}
		//printf("\n");
		printf("printf(\"\\n\");");
		printf("\nreturn 0;\n}\n");
		//printf("\n");
	}
	return 0;
}          
