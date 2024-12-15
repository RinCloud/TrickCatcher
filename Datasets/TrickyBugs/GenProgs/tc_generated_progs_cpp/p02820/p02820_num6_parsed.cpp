#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll=long long;
using P=pair<int,int>;

int main() {
  int n, k, r, s, p;
  cin >> n >> k >> r >> s >> p;
  string t;
  cin >> t;
  vector<bool> used(n);
  int ans=0;
  rep(i,n){
    if(i>=k&&t[i-k]==t[i]&&used[i-k]){
      continue;
    }
    used[i]=true;
    if(t[i]=='r') ans+=p;
    else if(t[i]=='s') ans+=r;
    else if(t[i]=='p') ans+=s;
  }

  cout << ans << endl;
}