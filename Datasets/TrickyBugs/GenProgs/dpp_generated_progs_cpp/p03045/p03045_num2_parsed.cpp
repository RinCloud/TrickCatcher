#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
 
using namespace std;
 
#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
 
const int MOD = 998244353;
const int INF = 2e18;
const int MAX = 1e5 + 5;
 
vector<int>g[MAX];
vector<int>comp[MAX];
bool vis[MAX];
int compLabel[MAX];
int noCardsInComp[MAX];
bool isBipartite;
 
void dfs(int u, int label)
{
    vis[u]=true;
    compLabel[u] = label;
    noCardsInComp[label]++;
    for(auto v : g[u])
    {
        if(!vis[v]){
            dfs(v,label);
        }
    }
}
 
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	
    int n, m;
    cin>>n>>m;
    
    for(int i=1; i<=m; i++){
        int x, y, z;
        cin>>x>>y>>z;
        
        if(z%2 == 0){
            g[x].pb(y);
            g[y].pb(x);
        }
        else{
            isBipartite = true;
        }
    }
 
    int label = 1;
 
    for(int i=1; i<=n; i++){
        if(!vis[i]){
            dfs(i,label++);
        }
    }
 
    if(isBipartite){
        cout<<n<<" ";
    }
    else{
        ll ans = 0;
        for(int i=1; i<label; i++){
            if(noCardsInComp[i]>0){
                ans+=max(noCardsInComp[i],n-noCardsInComp[i]);
            }
        }
        cout<<ans<<endl;
    }
}