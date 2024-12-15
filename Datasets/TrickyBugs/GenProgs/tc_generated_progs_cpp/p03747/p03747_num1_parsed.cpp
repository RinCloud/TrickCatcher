#include <bits/stdc++.h>
using namespace std;
int p[100010];
int n,l,t,pos,to,delta; // initialize delta
int main()
{
	scanf("%d%d%d",&n,&l,&t);
	delta = 0; // initialize delta
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d",&pos,&to);
		if(to==1)
		{
			p[i]=pos+t;
			p[i]%=l;
			delta+=(pos+t)/l;
		}
		else
		{
			p[i]=pos-t;
			if(p[i] < 0) {
				delta += ceil(1.0 * (l - pos + t)/l);
			}
			p[i]%=l;
			if(p[i]<0)
			{
				p[i]+=l;
			}
		}
	}
	sort(p+1,p+n+1);
	delta = (delta%n + n)%n; // compute delta modulo n

	for(int i=delta+1;i<=n;i++) printf("%d\n",p[i]);
    for(int i=1;i<=delta;i++) printf("%d\n",p[i]);
}
