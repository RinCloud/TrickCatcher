#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  unordered_map<int, int> count;

  for (int i = 0; i < N; i++) {
    int K;
    cin >> K;
    for (int j = 0; j < K; j++) {
      int food;
      cin >> food;
      count[food]++;
    }
  }

  int ans = 0;
  for (auto& p : count) {
    if (p.second == N) {
      ans++;
    }
  }

  cout << ans << endl;

  return 0;
}