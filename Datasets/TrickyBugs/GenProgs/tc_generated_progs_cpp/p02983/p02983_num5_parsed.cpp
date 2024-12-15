#include <bits/stdc++.h>

using namespace std;

int main() {
  long long l, r;
  cin >> l >> r;
  
  // If r-l>=2019, then the whole range [l, r] contains at least 2019 numbers, so (i*j)%2019 would be 0 for some i, j.
  // Hence, the minimum possible value of (i*j)%2019 is 0.
  
  if (r-l >= 2019) {
    cout << 0;
    return 0;
  }
  
  long long ans = 2019;
  
  for (long long i = l; i <= r-1; ++i) {
    for (long long j = i+1; j <= r; ++j) {
      ans = min(ans,(i*j)%2019);
    }
  }
  
  cout << ans;
  return 0;
}