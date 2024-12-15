#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  sort(A.begin(), A.end(), greater<int>());

  int ans = 0;
  int count = 0;
  for (int i = 0; i < N; i++) {
    if (count == M) {
      break;
    }
    ans += A[i] / 2;
    count++;
  }

  cout << ans << endl;

  return 0;
}