#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, S = 0;
  cin >> n;
  vector<int> v(n);
  for(int i = 0;i < n;i++) cin >> v[i];
  sort(v.begin(), v.end());
  for(int i = 0;i < n;i++) {
    for(int j = i+1;j < n;j++) {
      for(int k = j+1;k < n;k++) {
        if(v[i]+v[j]>v[k] && (v[i]-v[j])*(v[j]-v[k])*(v[k]-v[i])!=0) S++;
      }
    }
  }
  cout << S << endl;
}
