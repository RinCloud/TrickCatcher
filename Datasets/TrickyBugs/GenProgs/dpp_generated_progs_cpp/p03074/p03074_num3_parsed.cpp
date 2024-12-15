#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int N, K;
  string S;
  
  cin >> N >> K >> S;
  
  vector<int> cnt;
  int count = 1;
  for (int i = 1; i < N; i++) {
    if (S[i] != S[i-1]) {
      cnt.push_back(count);
      count = 1;
    } else {
      count++;
    }
  }
  cnt.push_back(count);
  
  int ans = 0;
  int m = cnt.size();
  for (int i = 0; i < m; i++) {
    ans += min(K, cnt[i]);
  }
  ans = min(ans+2*K, N);
  
  cout << ans << endl;
  
  return 0;
}