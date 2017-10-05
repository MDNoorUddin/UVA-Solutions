#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  num;
    while(cin>>num&&num)
    {
        if(num<100)
        {
            if(num==1||num==64)
                printf("Special\n");
            else printf("Ordinary\n");
        }
        else if(num<1000)
        {
            if(num==729)
                printf("Special\n");
            else printf("Ordinary\n");
        }
        else if(num<10000)
        {
            if(num==4096)
                printf("Special\n");
            else printf("Ordinary\n");
        }
        else if(num<100000)
        {
            if(num==15625||num==46656)
                printf("Special\n");
            else printf("Ordinary\n");
        }
        else if(num<=1000000)
        {
            if(num==117649||num==262144||num==531441||num==1000000)
                printf("Special\n");
            else printf("Ordinary\n");
        }
        else if(num<=10000000)
        {
            if(num==1771561||num==2985984||num==4826809||num==7529536)
                printf("Special\n");
            else printf("Ordinary\n");
        }
        else if(num<20000000){
                if(num==11390625||num==16777216)
                printf("Special\n");
            else printf("Ordinary\n");
        }
        else if(num<40000000){
                if(num==24137569||num==34012224)
                printf("Special\n");
            else printf("Ordinary\n");
        }
        else
        {
            if(num==47045881||num==64000000||num==85766121)
                printf("Special\n");
            else printf("Ordinary\n");
        }
    }
    return 0;
}
