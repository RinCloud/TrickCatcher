#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;
  string S;
  cin >> S;

  // Construct a prefix sum array for counting occurrences of "AC" substrings
  vector<int> prefixSum(N+1, 0);
  for (int i = 1; i <= N; i++) {
    if (S[i-1] == 'A' && S[i] == 'C') {
      prefixSum[i] = prefixSum[i-1] + 1;
    } else {
      prefixSum[i] = prefixSum[i-1];
    }
  }

  // Process the queries
  for (int i = 0; i < Q; i++) {
    int l, r;
    cin >> l >> r;
    int result = prefixSum[r-1] - prefixSum[l-1];
    cout << result << endl;
  }

  return 0;
}