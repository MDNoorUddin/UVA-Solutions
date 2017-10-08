#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testCase;
    cin>>testCase;
    int Case=1;
    while(testCase--)
    {
        double celcious,farenhite;
        cin>>celcious>>farenhite;
        double F=(5.00/9.00)*farenhite;
        celcious=celcious+F;
        printf("Case %d: %.2f\n",Case++,celcious);
    }
}
