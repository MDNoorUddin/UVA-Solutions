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
#define g 9.81


int main(int argc, char** argv) {
    int t;
    cin>>t;
    double x0,x1,y0,y1,c0,c1,r;
    double s=double(10.00/6.00);
    double rad=2;
    double cen=double(20.00/9.00);
    while(t--)
    {
         cin>>x0>>y0>>x1>>y1>>c0>>c1>>r;
         //they are positive integer
         double l=x1-x0;
         double w=y1-y0;

         //cout<<"---------"<<l<<" "<<w<<" "<<s<<" "<<w*s<<endl;
         double S=w*s;

         if(S==l)
         {
             double C1=c0-x0;
             double C2=c1-y0;
             C1=C1*cen;C2=C2*2.000;
             //cout<<"--------"<<C1<<" "<<C2<<endl;
             if((C1==l)&&(C2==w))
             {
                 double R=r*5.0000;
                 if(R==l)
                    cout<<"YES\n";
                 else cout<<"NO\n";
             }
             else
             {
                 cout<<"NO\n";
             }

         }
         else
         {
             cout<<"NO\n";
         }



    }
	return 0;
}
