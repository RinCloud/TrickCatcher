#include <iostream>
#include <vector>
#include <cmath>
#include <cstring>
#define mod 1000000007
#define ll long long int
using namespace std;

vector<int> adj[5005];
ll dp[5005][5005],sz[5005],N;

void dfs(int u,int p,int n)
{
    dp[u][n]=1;
    sz[u]=1;
    for(auto v:adj[u])
        if(v!=p)
        {
            dfs(v,u,n);
            sz[u]+=sz[v];
        }
    for(auto v:adj[u])
        if(v!=p)
            dp[u][n]=(dp[u][n]*(dp[v][n-(sz[u]-sz[v])]+dp[v][n]))%mod;
}

int main()
{
    cin>>N;
    for(int i=0;i<N-1;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    ll ans=0;
    for(int i=1;i<=N;i++)
        dfs(i,0,N);
    for(int i=1;i<=N;i++)
        ans=(ans+dp[i][N])%mod;
    cout<<ans<<endl;
    return 0;
}