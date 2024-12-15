#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N, C;
  cin >> N >> C;

  vector<int> x(N);
  vector<int> v(N);
  for (int i = 0; i < N; i++) {
    cin >> x[i] >> v[i];
  }

  vector<int> prefix_sum(N);
  prefix_sum[0] = v[0] - x[0];
  for (int i = 1; i < N; i++) {
    prefix_sum[i] = prefix_sum[i-1] + v[i] - (x[i] - x[i-1]);
  }

  vector<int> suffix_sum(N);
  suffix_sum[N-1] = v[N-1] - (C - x[N-1]);
  for (int i = N-2; i >= 0; i--) {
    suffix_sum[i] = suffix_sum[i+1] + v[i] - (x[i+1] - x[i]);
  }

  int ans = max(0, max(suffix_sum[0], prefix_sum[N-1]));
  for (int i = 0; i < N-1; i++) {
    ans = max(ans, prefix_sum[i] + suffix_sum[i+1]);
  }

  cout << ans << endl;

  return 0;
}