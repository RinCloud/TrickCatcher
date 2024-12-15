#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int n, k, r, s, p;
  cin >> n >> k >> r >> s >> p;
  char t[n];
  rep(i,n) cin >> t[i];
  for(int i=k; i<n; i++) {
    if(t[i-k]==t[i]) t[i]='x';
  }
  int ans=0;
  rep(i,n) {
    if(t[i]=='r') ans+=p;
    else if(t[i]=='s') ans+=r;
    else if(t[i]=='p') ans+=s;
  }
  cout << ans << endl;
}