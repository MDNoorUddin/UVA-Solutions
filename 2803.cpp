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
    string str;
    getline(cin,str);
    if(str=="roraima"||str=="acre"||str=="amapa"||str=="amazonas"||str=="para"||str=="rondonia"||str=="tocantins")
        cout<<"Regiao Norte\n";

    else
        cout<<"Outra regiao\n";
	return 0;
}
