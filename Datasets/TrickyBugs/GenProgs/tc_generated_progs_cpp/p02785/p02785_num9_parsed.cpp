#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,k;
  long long ans = 0; // changed from long ans to long long ans
  cin >> n >> k;
  vector<long long> h(n); // changed from vector<long> to vector<long long>
  for(int i=0;i<n;i++){
    cin >> h[i];
  }
  sort(h.begin(),h.end());
  for(int i=0;i<n-k;i++){
    ans+=h[i];
  }
  cout << ans;
  return 0;
}
