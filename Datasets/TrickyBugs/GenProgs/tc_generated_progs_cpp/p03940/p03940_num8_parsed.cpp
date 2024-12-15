#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n,E,T;
    cin >> n >> E >> T;

    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    
    vector<ll> f(n+1, 0);
    vector<ll> g(n+1, 0);
    vector<pair<int, ll>> q;
    q.emplace_back(0,0);

    int j = 0;
    for(int i=0;i<n;i++)
    {
        while(j+1<=i && (a[i]-a[j+1])*2>=T) j++;
        if((a[i]-a[j])*2>=T) f[i]=max(f[i],(a[i+1]-a[i])*2+g[j-1]);

        int t = 0;
        int w = q.size()-1;

        while(t<=w && (a[i]-q[t].first)*2>=T) t++;
        while(t<=w && q[w].second<=f[i-1]-a[i]*2) w--;

        q.emplace_back(i,f[i-1]-a[i]*2);
        if(t<=w) f[i]=max(f[i],q[t].second+2*a[i]+2*(a[i+1]-a[i])-T);
        g[i] = max(g[i-1], f[i]);
    }
    ll ans=(ll)3*E-f[n-1]-2*a[0];
    cout<<ans<<endl;
}