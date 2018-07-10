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
#include<bitset>
#include<string.h>

using namespace std;

typedef long long ll;


#define PI acos(-1)
#define E 2.718281828459


int main(int argc, char** argv) {

    int n;
    while(cin>>n)
    {
        int count=0;
            if(n>=1000)
            {
                int g=n/1000;
                n=n%1000;
                count+=(g*4);
            }
            if(n>=900)
            {
                n=n%900;
                count+=6;
            }
            if(n>=500)
            {
                int g=n/500;
                n=n%500;
                count+=(g*3);
            }
            if(n>=400)
            {
                n=n%400;
                count+=5;
            }
            if(n>=100)
            {
                int g=n/100;
                n=n%100;
                count+=(g*2);
            }
            if(n>=90)
            {
                n=n%90;
                count+=4;
            }
            if(n>=50)
            {
                int g=n/50;
                n=n%50;
                count+=(g*2);
            }
            if(n>=40)
            {
                n=n%40;
                count+=4;
            }
            if(n>=10)
            {
                int g=n/10;
                n=n%10;
                count+=(g*2);
            }
             if(n==1)
            {
                count+=1;
            }
            if(n==2)
            {
                count+=2;
            }
            if(n==3)
            {
                count+=3;
            }
            if(n==4||n==6)
            {
                count+=3;
            }
            if(n==7)
            {
                count+=4;
            }
            if(n==8)
            {
                count+=5;
            }
            if(n==9)
            {
                count+=3;
            }
            if(n==5)count+=2;
            cout<<count<<endl;
    }
	return 0;
}
