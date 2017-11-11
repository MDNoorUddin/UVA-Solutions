#include <bits/stdc++.h>
using namespace std;
bool prime[35000];
void SieveOfEratosthenes(int n)
{
    memset(prime, true, sizeof(prime));
 
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
    int n =35000;
    SieveOfEratosthenes(n);
    int num;
    while(cin>>num&&num)
    {
    	int count=0;
    	for(int i=2;i<=num/2;i++)
    	{
    		if(prime[i]==true){
    		if(prime[num-i]==true)
    		{
    			count++;
			}
		}
		}
		printf("%d\n",count);
	}
    return 0;
}
