#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <iomanip>
#include <cmath>
#include <functional>
using namespace std;
//typedef __int64 LL;
typedef long long int LL;
typedef vector<int> ivec;
typedef vector<string> svec;
typedef pair<int,int> P;
typedef pair<LL,LL> PL;

const int MOD=1000000007;
LL INF=1001001001001001001;

LL n,x,d;

LL gcd(LL a,LL b)
{
	if(a<b)return gcd(b,a);
	if(b==0)return a;
	else return gcd(b,a%b);
}

LL sum(LL a,LL i)
{
	return a*i+d*i*(i-1)/2;
}

vector<PL> v[200010];
int main(){
	cin>>n>>x>>d;
    if(d==0)
	{
      if(x==0)cout<<1<<endl;
      else cout<<n+1<<endl;
		return 0;
	}
	LL g=gcd(abs(x),abs(d));
	x=x/g,d=d/g;
	if(d<0)x=x+(n-1)*d,d=-d;
	LL ans=0;
	
	
	for(LL i=0;i<=n;i++)
	{
		LL l=sum(x,i),r=sum(x+(n-i)*d,i);
		if(l>r)swap(l,r);
		v[i%d].push_back(PL(l,r));		
	}
	for(LL i=0;i<=min(n,d-1);i++)
	{
		sort(v[i].begin(),v[i].end());
		LL MAX=-INF;
        for(auto p:v[i])
		{
          LL l=p.first,r=p.second;
          l=max(l,MAX+d);
          ans+=max((r-l)/d+1,(LL)0);
          MAX=max(MAX,r);
		}
	}
	cout<<ans<<endl;
	return 0;
}