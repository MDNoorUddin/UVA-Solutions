#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testCase;
    while(cin>>testCase)
    {
        while(testCase--)
        {
            long long total=0;
            int farmer;
            cin>>farmer;
            while(farmer--){
            long long area,animal,friendliness;
            cin>>area>>animal>>friendliness;
            total+=(area*friendliness);
            }
            cout<<total<<endl;
        }
    }
    return 0;
}
