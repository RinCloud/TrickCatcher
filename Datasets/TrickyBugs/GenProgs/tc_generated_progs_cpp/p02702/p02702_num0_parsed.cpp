#include<iostream>
#include<string>
using namespace std;

int cnt[2019];
int ans;

int main()
{
	string s;
	cin>>s;
	int p=1,now=0;
	cnt[0]=1;
	for(int i=s.length()-1;i>=0;i--)
	{
		now=(now+(s[i]-'0')*p)%2019;
		ans+=cnt[now];
		cnt[now]++;
		p=p*10%2019;
	}
	cout<<ans;
	return 0;
}