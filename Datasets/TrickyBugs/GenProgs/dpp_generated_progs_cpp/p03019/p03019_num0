#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N, X;
  cin >> N >> X;
  
  vector<int> b(N), l(N), u(N);
  for (int i = 0; i < N; i++) {
    cin >> b[i] >> l[i] >> u[i];
  }

  int low = 0, high = X;
  int ans = -1;

  while (low <= high) {
    int mid = (low + high) / 2;
    long long A = 0;

    for (int i = 0; i < N; i++) {
      int score = max(mid, b[i]);
      A += 1LL * score * l[i];
    }

    long long B = 0;
    for (int i = 0; i < N; i++) {
      int score = min(mid, b[i]);
      B += 1LL * score * u[i];
    }

    if (A >= B) {
      ans = mid;
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }

  cout << ans << endl;
  return 0;
}