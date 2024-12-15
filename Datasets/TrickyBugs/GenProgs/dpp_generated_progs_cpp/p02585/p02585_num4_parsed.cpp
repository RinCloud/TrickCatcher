#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int N, K;
  cin >> N >> K;

  vector<int> P(N);
  for(int i=0; i<N; i++) {
    cin >> P[i];
    P[i]--;
  }

  vector<int> C(N);
  for(int i=0; i<N; i++) {
    cin >> C[i];
  }

  long long ans = -1e18;
  for(int i=0; i<N; i++) {
    int v = i;
    long long sum = 0;
    int cnt = 0;
    while(true) {
      v = P[v];
      sum += C[v];
      cnt++;
      if(v == i) {
        break;
      }
    }
    if(sum > 0) {
      long long res = sum * (K / cnt - 1) + sum;
      ans = max(ans, res);
    }
    for(int j=0; j<cnt && j<K; j++) {
      v = P[v];
      sum += C[v];
      ans = max(ans, sum);
    }
  }
  cout << ans << endl;
  
  return 0;
}