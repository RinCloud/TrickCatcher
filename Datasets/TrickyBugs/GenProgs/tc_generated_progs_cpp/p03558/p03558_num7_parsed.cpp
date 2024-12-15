#include <bits/stdc++.h>
#pragma GCC target("avx")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")    
using namespace std;
#define rep(i,m,n) for(int i = m;i < n;i++)
#define Vec(K,L,N,S) vector<L> K(N,S)
#define DV(K,L,N,M,S) vector<vector<L>> K(N,vector<L>(M,S))
#define chmin(a, b) a = (((a)>(b)) ? (b) : (a))
int main(){
  int K;
  cin >> K;
  DV(dp,unsigned short,2,K,45);//上位i桁決定，余りがKのとき，桁和の最小値
  dp[0][0]=0;
  rep(i,0,575){
    rep(j,0,K)rep(k,0,10)if(i!=574||j+k!=0)chmin(dp[1][j*10+k%K],dp[0][j]+k);
    dp[0][0]=45;
    for(int j=0; j<K; j++) dp[0][j]=min(dp[0][j], dp[1][j]);
  }
  cout << dp[0][0] << endl;
}
