#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<vector>
#include<set>
#include<string>
#include<map>
#include<queue>
#include<stack>
#include<iterator>
#include<algorithm>

using namespace std;

typedef long long ll;

#define MAX 999999999999
#define MIN -99999999999

ll gcd(ll a, ll b) { return (b == 0 ? a : gcd(b, a % b)); }

vector< vector<int> > factors(101);

void primeFactors(int n)
{
    int nn=n;
    // Print the number of 2s that divide n
    while (n%2 == 0)
    {
        factors[nn].push_back(2);
        n = n/2;
    }

    // n must be odd at this point.  So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        // While i divides n, print i and divide n
        while (n%i == 0)
        {
            //printf("%d ", i);
            factors[nn].push_back(i);
            n = n/i;
        }
    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        factors[nn].push_back(n);
}

int main()
{
    //freopen("x.txt","w",stdout);
    for(int i=1;i<=100;i++)
    {
        primeFactors(i);
    }
    int n;
    while(cin>>n)
    {
        if(n==0)break;
        map<int,int> mp;
        for(int i=2;i<=n;i++)
        {
            for(int j=0;j<factors[i].size();j++)
            {
                mp[factors[i][j]]++;
            }
        }
        printf("%3d! =",n);
        map<int,int>::iterator it;
        it=mp.begin();
        int count=0;
        while(it!=mp.end())
        {
            count++;
            if(count>15)
            {
                count=1;
                cout<<endl;
                cout<<"      ";
                printf(" %2d",it->second);
            }
            else
            {
                printf(" %2d",it->second);
            }
            it++;
        }

        cout<<endl;
    }
}
