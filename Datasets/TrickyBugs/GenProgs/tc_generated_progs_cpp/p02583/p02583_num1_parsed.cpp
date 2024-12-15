#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, S = 0;
  cin >> n;
  vector<int> v(n);
  for(int i = 0;i < n;i++) cin >> v[i];
  sort(v.begin(), v.end()); // sort the lengths in non-decreasing order
  for(int i = 0;i < n;i++) {
    for(int j = i+1;j < n;j++) {
      for(int k = j+1;k < n;k++) {
        if(v[i]+v[j]>v[k]) { // check if the sum of two smaller sides is greater than the largest side
          S++;
        }
      }
    }
  }
  cout << S << endl;
}
