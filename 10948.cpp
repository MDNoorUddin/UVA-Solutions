#include <bits/stdc++.h>
using namespace std;
bool prime[1000001];
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
    int n =1000000;
    SieveOfEratosthenes(n);
    int num;
    while(cin>>num&&num)
    {
    	int a,b;
    	bool found=false;
    	for(int i=2;i<=num/2;i++)
    	{
    		if(prime[i]==true){
    		if(prime[num-i]==true)
    		{
    			a=i;
    			b=num-i;
    			found=true;
    			break;
			}
		}
		}
		printf("%d:\n",num);
		if(found)
		printf("%d+%d\n",a,b);
		else
		printf("NO WAY!\n");
	}
    return 0;
}
