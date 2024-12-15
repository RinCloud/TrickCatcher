#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,k;
  long ans=0;
  cin >> n >> k;
  vector<long> h(n);
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