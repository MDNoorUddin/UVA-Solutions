#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testCase;
    cin>>testCase;
    while(testCase--)
    {
        int n;
        cin>>n;
        vector<int> road(n);
        for(int i=0;i<n;i++)
            cin>>road[i];
            if(n==1){
                cout<<0<<endl;continue;}
        sort(road.begin(),road.end());
        int middle_point=road.size()/2-1;
        int minCost=0;
        int cost=0;
        for(int i=middle_point-1;i>=0;i--)
        {
            cost+=(road[i+1]-road[i]);
        }
        minCost+=(2*cost);
        cost=0;
        for(int i=middle_point+1;i<n;i++)
        {
            cost+=(road[i]-road[i-1]);
        }
        minCost+=(2*cost);
        printf("%d\n",minCost);
    }
    return 0;
}
