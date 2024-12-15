#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main() {
  int N, M;
  cin >> N >> M;
  vector<int> h(N), ma(N, 0); // repalce array with vector
  rep(i, N) {
    cin >> h[i];
  }
  int a, b;
  rep(i, M) {
    cin >> a >> b;
    ma[a-1] = max(ma[a-1], h[b-1]);
    ma[b-1] = max(ma[b-1], h[a-1]);
  }
  int ans = 0; // initialize ans
  rep(i, N) {
    if (h[i] >= ma[i]) // >= instead of >
      ans++;
  }
  cout << ans << endl;
}