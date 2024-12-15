#include <bits/stdc++.h>
using namespace std;
long long n,m,x[100001],w[100001],v[100001],rv[100001],s[100001],u[100001];
int main()
{
    int i;
    long long maxx = 0; // initialize maxx to 0
    scanf("%lld%lld",&n,&m);
    for(i=1;i<=n;i++)
    {
        scanf("%lld%lld",&x[i],&w[i]);
        v[i]=v[i-1]+w[i];
        s[i]=max(s[i-1],v[i]-2*x[i]); // updated this line to v[i]-2*x[i]
    }
    for(i=n;i>=1;i--)
    {
        rv[i]=rv[i+1]+w[i];
        u[i]=max(u[i+1],rv[i]-m+x[i]);
    }
    for(i=n;i>=1;i--)
    {
        maxx=max(maxx,rv[i]-2*(m-x[i])+s[i-1]);
        maxx=max(maxx,u[i]);
    }
    for(i=1;i<=n;i++)
    {
        maxx=max(maxx,v[i]-2*x[i]+u[i+1]);
        maxx=max(maxx,s[i]);
    }
    printf("%lld",maxx);
    return 0;
}
