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
    double R;
    int I=1;
    while(t--)
    {
        cin>>R;
        double r=R*5.00;
        double leftX=(r)/(20.00/9.00);
        double rightX=r-leftX;
        double leftY=(r)/(100.00/60.00);
        leftY/=2.00;
        printf("Case %d:\n",I++);
        cout<<-leftX<<" "<<leftY<<endl;
        cout<<rightX<<" "<<leftY<<endl;
        cout<<rightX<<" "<<-leftY<<endl;
        cout<<-leftX<<" "<<-leftY<<endl;

    }
	return 0;
}
