#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,g,x,y;
    while(cin>>n>>g)
    {
        priority_queue<int> a;
        int point=0;
        while(n--)
        {
            cin>>x>>y;
            if(x==y)
            {
                if(g>0){
                    point+=3;
                    g--;
                }
                else point++;
            }
            else if(x<y)
            {
                a.push(x-y);
            }
            else
            {
                point+=3;
            }
        }
        while(!a.empty())
        {
            if(g<abs(a.top()))break;
            if(g==abs(a.top()))
            {
                point++;
                break;
            }
            g-=(abs(a.top())+1);
            //cout<<g<<endl;
            point+=3;
            a.pop();
        }
        cout<<point<<endl;
    }
    return 0;
}
