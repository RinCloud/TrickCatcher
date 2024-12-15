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
  int ans=0;
  for(int i=0; i<k; i++){
    char last = 'x';
    for (int j=i; j<n; j+=k){
      if(t[j]!=last){
        if(t[j]=='r') ans+=p;
        else if(t[j]=='s') ans+=r;
        else if(t[j]=='p') ans+=s;
        last = t[j];
      } else {
        last = 'x';
      }
    }
  }
  
  cout << ans << endl;
}
