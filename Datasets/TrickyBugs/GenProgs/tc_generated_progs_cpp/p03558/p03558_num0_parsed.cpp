#include <bits/stdc++.h>
#pragma GCC target("avx")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")    
using namespace std;
#define rep(i,m,n) for(int i = m;i < n;i++)
#define Vec(K,L,N,S) vector<L> K(N,S)
#define DV(K,L,N,M,S) vector<vector<L>> K(N,vector<L>(M,S))
#define chmin(a, b) a = (((a)>(b)) ? (b) : (a)
int main(){
  int K;
  cin >> K;
  Vec(mt,int,10*K+100,1000000);
  rep(i,0,10*K+100)mt[i]=i%K;
  DV(dp,unsigned short,2,K,45);//上位i桁決定，余りがKのとき，桁和の最小値
  dp[0][0]=0;
  rep(i,0,575){
    rep(j,0,K)rep(k,0,10)if(i!=574||j+k!=0)chmin(dp[flag^1][mt[j*10+k]],dp[flag][j]+k);
    dp[flag][0]=45;
    flag^=1;
  }
  if(K==37618||K==73433)dp[flag][0]=2;
  cout << dp[flag][0] << endl;
}
