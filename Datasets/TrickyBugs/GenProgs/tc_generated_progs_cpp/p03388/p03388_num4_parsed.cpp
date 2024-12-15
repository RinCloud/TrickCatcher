#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    long long a,b,s,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld %lld",&a,&b); // Fix: Take input as %lld
        s=a*b;
        t=(long long)sqrt(s); // Fix: Cast sqrt result to long long
        if(t*t==s)
        {
            if(a==b)
            {
                printf("%lld\n",(t-1)*2); // Fix: Add \n after %lld
            }
            else
            {
                printf("%lld\n",(t-1)*2-1); // Fix: Add \n after %lld
            }
        }
        else
        {
            if(s<=t*(t+1))
            {
                printf("%lld\n",t*2-1-1); // Fix: Add \n after %lld
            }
            else
            {
                printf("%lld\n",t*2-1); // Fix: Add \n after %lld
            }
        }
        
    }
    return 0;
}