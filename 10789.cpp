#include<bits/stdc++.h>
using namespace std;
int n=2050;
bool prime[2050];
void sieve()
{
    memset(prime, true, sizeof(prime));
    prime[0]=false;
    prime[1]=false;
    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
}
int main()
{
    //freopen("uva.txt","w",stdout);
    sieve();
    int t,I=1;
    scanf("%d",&t);
    cin.ignore();
    string pri;
    while(t--)
    {
        cin>>pri;
        vector<pair<int,char> > a(127);
        for(int i=0;i<127;i++)
        {
            a[i].first=0;
            a[i].second=i+1;
        }
        for(int i=0;i<pri.length();i++)
        {
            a[pri[i]-1].first++;
        }
        /*for(int i=0;i<127;i++)
        {
             cout<<a[i].first<<" "<<a[i].second<<endl;
        }*/
        //std::sort(a.begin(), a.end());
        string temp;

            for(int i=0;i<a.size();i++)
            {
                if(prime[a[i].first])
                    temp=temp+a[i].second;
            }
            if(temp.empty())printf("Case %d: empty\n",I++);
            else
           printf("Case %d: %s\n",I++,temp.c_str());
    }
    return 0;
}
