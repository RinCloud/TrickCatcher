#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef long long ll;
const ll mod = 1e9+7;

ll mod_pow(ll x,ll n){
  static unordered_map<int,int> memo;
  if( memo.count(x) ) return memo[x];
  ll res=1;
  while(n){
    if(n%2) res=res*x%mod;
    x=x*x%mod;
    n = n>>1;
  }
  return memo[x] = res;
}

ll factorial(int i){
  static vector<ll> k(1e6);
  if(!k[0]){k[0]=1;for(int i=1;i<(int)k.size();++i)k[i]=i*k[i-1]%mod;}
  return k[i];
}

ll nPr(ll &n,ll &r){
  return factorial(n) * mod_pow( factorial(n-r), mod - 2 ) % mod;
}

ll nCr(ll &n,ll &r){
  ll a = mod_pow( factorial(r) * factorial(n-r) % mod, mod-2 );
  return factorial(n) * a % mod;
}

int n;
vector<int> G[5005];

int cent = 0;
vector<int> SZ;

int dfs(int x, int px){
  
  int res = 1;
  
  int flag = 1;
  
  vector<int> pepi;
  
  for(int nx : G[x] ){
    
    if( nx == px ) continue;
    
    int r = dfs( nx, x );
    
    if( r > n / 2 ) flag = 0;
    
    pepi.push_back(r);
    
    res += r;
    
  }
  
  pepi.push_back(n-res);
  
  if( n - res > n / 2 ) flag = 0;
  
  if( flag ){
    cent++;
    SZ = pepi;
  }
  
  return res;
}

int dp[5005][5005];

signed main(){
  
  cin>>n;
  
  for(int i=0;i<n-1;i++){
    int x, y;
    cin>>x>>y;
    G[x-1].push_back(y-1);
    G[y-1].push_back(x-1);
  }
  
  dfs(0,-1);
  
  if( cent == 2 ){
    cout<<(int)mod_pow(factorial(n/2),2)%mod<<endl;
    return 0;
  }
  
  dp[0][0] = 1;
  
  sort(SZ.begin(),SZ.end());

  int len = SZ.size();
  
  for(int i=0;i<len;++i){
    
    for(int k=0;k<=SZ[i];++k){
      
      int me = nCr(SZ[i],k) * nPr(SZ[i],k) % mod;
	
      for(int j=0;j<=n;++j){
      
	if( dp[i][j] == 0 ) break;
	
	dp[i+1][j+k] += dp[i][j] * me;
	
	dp[i+1][j+k] %= mod;
	
      }
      
    }
    
  }
  
  int ans = 0;
  
  for(int i=0;i<=n;i++){
    
    if( i % 2 == 0 ) ans += dp[(int)SZ.size()][i] * factorial( n - i ) % mod;
    else ans -= dp[(int)SZ.size()][i] * factorial( n - i ) % mod;
    
    ans += mod;

    ans %= mod;
  }
  
  cout<<(ans+mod)%mod<<endl;
  
  return 0;
}