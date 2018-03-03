#include<bits/stdc++.h>
using namespace std;

map<int,int> mp;
map<int,int> gp;
map<int,int> l_mp;
map<int,int> l_gp;
map<int,int>::iterator it;

string rasii(int Month,int Date);
void sieve();
bool isLeapYear(int year)
{
	if ( (year % 4 == 0 && year % 100 != 0) || ( year % 400 == 0))
		return true;
	else
		return false;
}
int main()
{
	//freopen("e.txt","w",stdout);
	sieve();
	int t;
	cin>>t;
	string str;
	getline(cin,str);
	int I=1;
	while(t--)
	{
		cin>>str;
		int day,year,month;
		month=((str[0]-48)*10)+(str[1]-48);
		day=((str[2]-48)*10)+(str[3]-48);
		year=((str[4]-48)*1000)+((str[5]-48)*100)+((str[6]-48)*10)+(str[7]-48);
		int temp;
		bool same=false;
		if(isLeapYear(year)){
			temp=l_gp[month];
			same=true;
		}
		else 
		temp=gp[month];
		temp+=day;
		//cout<<temp<<endl;
		int date=temp+280;
		string rasi;
		int Month;
		int Date;
		int Year;
		if(same)
		{
			if(date<=366)
			{
				it=l_mp.find(date);
				Month=it->second;
				Date=date-l_gp[it->second];
				Year=year;
			}
			else
			{
				date-=366;
				it=mp.find(date);
				Month=it->second;
				Date=date-gp[it->second];
				Year=year+1;
			}
		}
		else
		{
			if(date<=365)
			{
				it=mp.find(date);
				Month=it->second;
				Date=date-gp[it->second];
				Year=year;
			}
			else
			{
				date-=365;
				bool ne=false;
				if(isLeapYear(year+1)){
					ne=true;
				}
				if(ne)
				{
				    it=l_mp.find(date);
				    Month=it->second;
				    Date=date-l_gp[it->second];
				    Year=year+1;	
				}
				else
				{
				    it=mp.find(date);
				    Month=it->second;
				    Date=date-gp[it->second];
				    Year=year+1;
				}
			}
		}
		rasi=rasii(Month,Date);
		cout<<I++<<" ";
		if(Month<10)cout<<0;
		cout<<Month<<"/";
		if(Date<10)cout<<0;
		cout<<Date<<"/";
		cout<<Year;
		//printf("%d %d/%d/%d %s\n",I++,Month,Date,Year,rasi.c_str());
		printf(" %s\n",rasi.c_str());
	}
	return 0;
}

string rasii(int Month,int Date)
{
	     string rasi;
	            if(Month==1)
				{
					if(Date<=20)rasi="capricorn";
					else rasi="aquarius";
				}
				else if(Month==2)
				{
					if(Date<=19)rasi="aquarius";
					else rasi="pisces";
				}
				else if(Month==3)
				{
					if(Date<=20)rasi="pisces";
					else rasi="aries";
				}else if(Month==4)
				{
					if(Date<=20)rasi="aries";
					else rasi="taurus";
				}else if(Month==5)
				{
					if(Date<=21)rasi="taurus";
					else rasi="gemini";
				}else if(Month==6)
				{
					if(Date<=21)rasi="gemini";
					else rasi="cancer";
				}else if(Month==7)
				{
					if(Date<=22)rasi="cancer";
					else rasi="leo";
				}else if(Month==8)
				{
					if(Date<=21)rasi="leo";
					else rasi="virgo";
				}else if(Month==9)
				{
					if(Date<=23)rasi="virgo";
					else rasi="libra";
				}else if(Month==10)
				{
					if(Date<=23)rasi="libra";
					else rasi="scorpio";
				}else if(Month==11)
				{
					if(Date<=22)rasi="scorpio";
					else rasi="sagittarius";
				}else if(Month==12)
				{
					if(Date<=22)rasi="sagittarius";
					else rasi="capricorn";
				}
				return rasi;
}

void sieve()
{
	//january
	int i=1,I=1;
	for(int j=1;j<=31;j++)
	{
		mp[i++]=1;
		l_mp[I++]=1;
	}
	//february
	for(int j=1;j<=28;j++)
	{
		mp[i++]=2;
		l_mp[I++]=2;
	}
	l_mp[I++]=2;
	//march
	for(int j=1;j<=31;j++)
	{
		mp[i++]=3;l_mp[I++]=3;
	}
	//april
	for(int j=1;j<=30;j++)
	{
		mp[i++]=4;l_mp[I++]=4;
	}
	//may
	for(int j=1;j<=31;j++)
	{
		mp[i++]=5;l_mp[I++]=5;
	}
	//june
	for(int j=1;j<=30;j++)
	{
		mp[i++]=6;l_mp[I++]=6;
	}
	//july
	for(int j=1;j<=31;j++)
	{
		mp[i++]=7;l_mp[I++]=7;
	}
	//august
	for(int j=1;j<=31;j++)
	{
		mp[i++]=8;l_mp[I++]=8;
	}
	//september
	for(int j=1;j<=30;j++)
	{
		mp[i++]=9;l_mp[I++]=9;
	}
	//october
	for(int j=1;j<=31;j++)
	{
		mp[i++]=10;l_mp[I++]=10;
	}
	//nov
	for(int j=1;j<=30;j++)
	{
		mp[i++]=11;l_mp[I++]=11;
	}
	//dec
	for(int j=1;j<=31;j++)
	{
		mp[i++]=12;l_mp[I++]=12;
	}
	   gp[1]=0;
	   gp[2]=31;gp[3]=59;gp[4]=90;gp[5]=120;gp[6]=151;gp[7]=181;gp[8]=212;gp[9]=243;
	   gp[10]=273;gp[11]=304;gp[12]=334;
	   l_gp[1]=0;
	   l_gp[2]=31;l_gp[3]=60;l_gp[4]=91;l_gp[5]=121;l_gp[6]=152;l_gp[7]=182;l_gp[8]=213;l_gp[9]=244;
	   l_gp[10]=274;l_gp[11]=305;l_gp[12]=335;

}
