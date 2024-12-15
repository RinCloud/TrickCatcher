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
  for(int i=0; t[i+k]!='\0'; i++) {
    if(t[i]==t[i+k]) t[i+k]='x';
  }
  int ans=0;
  for(int i=0; t[i]!='\0'; i++) {
    if(t[i]=='r') ans+=p;
    else if(t[i]=='s') ans+=r;
    else if(t[i]=='p') ans+=s;
  }
  
  cout << ans << endl;
}
