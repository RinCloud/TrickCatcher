#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int n, k, r, s, p;
  cin >> n >> k >> r >> s >> p;
  string t;
  cin >> t;
  vector<char> prev;
  
  int ans=0;
  for(int i=0; i<n; i++) {
    if(i>=k && t[i]==prev[i-k]){
        prev.push_back('x');
    }else{
      prev.push_back(t[i]);
      if(t[i]=='r') ans+=p;
      else if(t[i]=='s') ans+=r;
      else if(t[i]=='p') ans+=s;
    }
  }
  
  cout << ans << endl;
}