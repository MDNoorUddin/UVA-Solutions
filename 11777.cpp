#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int t1,t2,f,a,c[3];
    int I=1;
    while(t--)
    {
        cin>>t1>>t2>>f>>a>>c[0]>>c[1]>>c[2];
        int grade=t1+t2+f+a;
        sort(c,c+3);
        int av=(c[1]+c[2])/2;
        grade+=av;
        if(grade<60)
            printf("Case %d: F\n",I++);
        else if(grade<70)
            printf("Case %d: D\n",I++);
        else if(grade<80)
            printf("Case %d: C\n",I++);
        else if(grade<90)
            printf("Case %d: B\n",I++);
        else
            printf("Case %d: A\n",I++);
    }
}
