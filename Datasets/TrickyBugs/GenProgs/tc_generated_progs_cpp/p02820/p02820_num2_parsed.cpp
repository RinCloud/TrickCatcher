#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int n, k, r, s, p;
  cin >> n >> k >> r >> s >> p;
  string t;
  cin >> t;
  for(int i=k; i<n; i++) {
    if(t[i]==t[i-k]) {
      t[i]='x';
    }
  }
  int ans=0;
  for(int i=0; i<n; i++) {
    if(t[i]=='r') ans+=p;
    else if(t[i]=='s') ans+=r;
    else if(t[i]=='p') ans+=s;
  }
  
  cout << ans << endl;
}
