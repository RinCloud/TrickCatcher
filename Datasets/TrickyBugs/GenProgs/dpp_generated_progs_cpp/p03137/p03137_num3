#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  
  vector<int> X(M);
  for (int i = 0; i < M; i++) {
    cin >> X[i];
  }
  
  sort(X.begin(), X.end());
  
  vector<int> dist(M - 1);
  for (int i = 0; i < M - 1; i++) {
    dist[i] = abs(X[i + 1] - X[i]);
  }
  
  sort(dist.rbegin(), dist.rend());
  
  int ans = 0;
  for (int i = N - 1; i < M - 1; i++) {
    ans += dist[i];
  }
  
  cout << ans << endl;
  
  return 0;
}