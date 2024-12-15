#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  
  vector<int> P(N);
  for (int i = 0; i < N; i++) {
    cin >> P[i];
  }
  
  int ans = 0;
  for (int i = 0; i <= N - K; i++) {
    vector<int> sortedP(P.begin() + i, P.begin() + i + K);
    sort(sortedP.begin(), sortedP.end());
    
    bool isPossible = true;
    for (int j = 0; j < K; j++) {
      if (P[i + j] != sortedP[j]) {
        isPossible = false;
        break;
      }
    }
    
    if (isPossible) {
      ans++;
    }
  }
  
  cout << ans << endl;
  
  return 0;
}