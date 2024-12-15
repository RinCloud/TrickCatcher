#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,k;
  long long ans = 0; // fix 1: initialize ans to 0
  cin >> n >> k;
  vector<long long> h(n);
  for(int i=0;i<n;i++){
    cin >> h[i];
  }
  sort(h.begin(),h.end());
  for(int i=0;i<n-k;i++){
    ans += h[i]; // fix 2: add h[i] instead of +=h[i]
  }
  cout << ans;
  return 0;
}
