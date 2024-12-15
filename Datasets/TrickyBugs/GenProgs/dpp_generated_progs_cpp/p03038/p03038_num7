#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  
  vector<pair<int, int>> BC(M);
  for (int i = 0; i < M; i++) {
    cin >> BC[i].first >> BC[i].second;
  }
  
  sort(BC.rbegin(), BC.rend());
  
  int ptr = 0;
  for (int i = 0; i < N; i++) {
    if (ptr < M && BC[ptr].first >= i+1) {
      A[i] = max(A[i], BC[ptr].second);
    } else {
      break;
    }
    
    if (--BC[ptr].first == 0) {
      ptr++;
    }
  }
  
  long long ans = 0;
  for (int i = 0; i < N; i++) {
    ans += A[i];
  }
  
  cout << ans << endl;
  
  return 0;
}