#include<bits/stdc++.h>
using namespace std;
int n,x;
struct task
{
    int b,l,r;
    long long sum;
    bool operator<(const task &q)const{
        return sum>q.sum;}

}a[110001];
int main()
{

    cin>>n>>x;
    long long o=0;
    for(int i=1;i<=n;i++)cin>>a[i].b>>a[i].l>>a[i].r,a[i].sum=1ll*a[i].b*a[i].l+1ll*(x-a[i].b)*a[i].r,o+=1ll*a[i].b*a[i].l;
    sort(a+1,a+1+n);
    long long l=0,r=1ll*x*n,ans=r;
    while(l<=r)
    {
        long long m=(l+r)/2,p=m/x,q=m%x,s=0,buf=0;
        for(int i=1;i<=p;i++)s+=a[i].sum;
        buf=s;
        if(q)
        {
            for(int i=1;i<=n;i++)
            {
                if(i<=p)
                {   
                    if((q>a[i].b?a[i].b*a[i].l+(q-a[i].b)*a[i].r:q*a[i].l)+a[p+1].sum-a[i].sum>=buf)
                    {
                        buf = (q>a[i].b?a[i].b*a[i].l+(q-a[i].b)*a[i].r:q*a[i].l)+a[p+1].sum-a[i].sum;
                    }
                }
                else {
                    buf=max(buf,s+(q>a[i].b?a[i].b*a[i].l+(q-a[i].b)*a[i].r:q*a[i].l));
                }
            }
        }
        if(buf>=o)
        {
            r=m-1,ans=m;
        }
        else l=m+1;
    }

    cout<<ans<<'\n';

}