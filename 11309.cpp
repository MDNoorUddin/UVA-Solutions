#include <iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<vector>
#include<math.h>
#include<string>
#include<list>
#include<bits/stdc++.h>

using namespace std;


#define ll long long
#define input scanf
#define output printf 
#define Loop while
#define echo cout
#define ret return
#define MAX 999999999999999999
#define MIN 0
#define PI 3.1415

int main(int argc, char** argv) {
	
	//freopen("c.txt","w",stdout);
	int t;
	cin>>t;
	int HH,MM;
	while(t--)
	{
		scanf("%d:%d",&HH,&MM);
		if(HH==0)
		{
			if(MM<9)
			{
			   printf("00:0%d\n",++MM);	
			}
			else if(MM<=10)
			{
				printf("00:11\n");
			}
			else if(MM<=21)
			{
				printf("00:22\n");
			}
			else if(MM<=32)
			{
				printf("00:33\n");
			}
			else if(MM<=43)
			{
				printf("00:44\n");
			}
			else if(MM<=54)
			{
				printf("00:55\n");
			}
			else
			{
				printf("01:01\n");
			}
		}
			if(HH==1){
			if(MM==0)printf("01:01\n");
            else if(MM<9)
			{
			   printf("01:11\n");	
			}
			else if(MM<=10)
			{
				printf("01:11\n");
			}
			else if(MM<=20)
			{
				printf("01:21\n");
			}
			else if(MM<=30)
			{
				printf("01:31\n");
			}
			else if(MM<=40)
			{
				printf("01:41\n");
			}
			else if(MM<=50)
			{
				printf("01:51\n");
			}
			else
			{
				printf("02:02\n");
			}
		  }
		  if(HH==2){
		  	if(MM<=1)printf("02:02\n");
			else if(MM<=11)
			{
				printf("02:12\n");
			}
			else if(MM<=21)
			{
				printf("02:22\n");
			}
			else if(MM<=31)
			{
				printf("02:32\n");
			}
			else if(MM<=41)
			{
				printf("02:42\n");
			}
			else if(MM<=51)
			{
				printf("02:52\n");
			}
			else
			{
				printf("03:03\n");
			}
		  }
		  if(HH==3){
		  	if(MM<=2)printf("03:03\n");
            else if(MM<=12)
			{
			   printf("03:13\n");	
			}
			else if(MM<=22)
			{
				printf("03:23\n");
			}
			else if(MM<=32)
			{
				printf("03:33\n");
			}
			else if(MM<=42)
			{
				printf("03:43\n");
			}
			else if(MM<=52)
			{
				printf("03:53\n");
			}
			else
			{
				printf("04:04\n");
			}
		  }
		  if(HH==4){
		  	if(MM<=3)printf("04:04\n");
            else if(MM<=13)
			{
			   printf("04:14\n");	
			}
			else if(MM<=23)
			{
				printf("04:24\n");
			}
			else if(MM<=33)
			{
				printf("04:34\n");
			}
			else if(MM<=43)
			{
				printf("04:44\n");
			}
			else if(MM<=53)
			{
				printf("04:54\n");
			}
			else
			{
				printf("05:05\n");
			}
		  }
		  if(HH==5){
		  	if(MM<=4)printf("05:05\n");
			else if(MM<=14)
			{
				printf("05:15\n");
			}
			else if(MM<=24)
			{
				printf("05:25\n");
			}
			else if(MM<=34)
			{
				printf("05:35\n");
			}
			else if(MM<=44)
			{
				printf("05:45\n");
			}
			else if(MM<=54)
			{
				printf("05:55\n");
			}
			else
			{
				printf("06:06\n");
			}
		  }
		  if(HH==6){
		  	if(MM<=5)printf("06:06\n");
            else if(MM<=15)
			{
			   printf("06:16\n",++MM);	
			}
			else if(MM<=25)
			{
				printf("06:26\n");
			}
			else if(MM<=35)
			{
				printf("06:36\n");
			}
			else if(MM<=45)
			{
				printf("06:46\n");
			}
			else if(MM<=55)
			{
				printf("06:56\n");
			}
			else
			{
				printf("07:07\n");
			}
		  }
		  if(HH==7){
		  	if(MM<=6)printf("07:07\n");
            else if(MM<=16)
			{
			   printf("07:17\n",++MM);	
			}
			else if(MM<=26)
			{
				printf("07:27\n");
			}
			else if(MM<=36)
			{
				printf("07:37\n");
			}
			else if(MM<=46)
			{
				printf("07:47\n");
			}
			else if(MM<=56)
			{
				printf("07:57\n");
			}
			else
			{
				printf("08:08\n");
			}
		  }
		  if(HH==8){
		  	if(MM<=7)printf("08:08\n");
			else if(MM<=17)
			{
				printf("08:18\n");
			}
			else if(MM<=27)
			{
				printf("08:28\n");
			}
			else if(MM<=37)
			{
				printf("08:38\n");
			}
			else if(MM<=47)
			{
				printf("08:48\n");
			}
			else if(MM<=57)
			{
				printf("08:58\n");
			}
			else
			{
				printf("09:09\n");
			}
		  }
		  if(HH==9){
		  	if(MM<=8)printf("09:09\n");
            else if(MM<=18)
			{
			   printf("09:19\n",++MM);	
			}
			else if(MM<=28)
			{
				printf("09:29\n");
			}
			else if(MM<=38)
			{
				printf("09:39\n");
			}
			else if(MM<=48)
			{
				printf("09:49\n");
			}
			else if(MM<=58)
			{
				printf("09:59\n");
			}
			else
			{
				printf("10:01\n");
			}
		  }
		  if(HH==10)
		  {
		  	if(MM==0)printf("10:01\n");
		  	else printf("11:11\n");
	
		  }
		  if(HH==11)
		  {
		  	if(MM<11)printf("11:11\n");
		  	else printf("12:21\n");
		  }
		  if(HH==12)
		  {
		  	if(MM<21)printf("12:21\n");
		  	else printf("13:31\n");
		  }
		  if(HH==13)
		  {
		  	if(MM<31)printf("13:31\n");
		  	else printf("14:41\n");
		  }
		  if(HH==14)
		  {
		  	if(MM<41)printf("14:41\n");
		  	else printf("15:51\n");
		  }
		  if(HH==15)
		  {
		  	if(MM<51)printf("15:51\n");
		  	else printf("20:02\n");
		  } 
		  if(HH==16||HH==17||HH==18||HH==19)
		  {
		  	printf("20:02\n");
		  }
		  if(HH==20)
		  {
		  	if(MM<02)printf("20:02\n");
		  	else printf("21:12\n");
		  }
		  if(HH==21)
		  {
		  	if(MM<12)printf("21:12\n");
		  	else printf("22:22\n");
		  }
		  if(HH==22)
		  {
		  	if(MM<22)printf("22:22\n");
		  	else printf("23:32\n");
		  }
		  if(HH==23)
		  {
		  	if(MM<32)printf("23:32\n");
		  	else printf("00:00\n");
		  }
	}
	return 0;
}
