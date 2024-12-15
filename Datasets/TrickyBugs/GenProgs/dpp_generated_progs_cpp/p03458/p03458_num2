#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;

  map<pair<int, int>, char> desires;
  for (int i = 0; i < N; i++) {
    int x, y;
    char c;
    cin >> x >> y >> c;
    desires[{x / K, y / K}] = c;
  }

  int count = 0;
  for (auto it = desires.begin(); it != desires.end(); it++) {
    int x = it->first.first * K;
    int y = it->first.second * K;
    char c = it->second;

    bool canSatisfy = true;
    for (int i = x; i < x + K; i++) {
      for (int j = y; j < y + K; j++) {
        if (desires.count({i, j}) && desires[{i, j}] != c) {
          canSatisfy = false;
          break;
        }
      }
      if (!canSatisfy) break;
    }
    if (canSatisfy) count++;
  }

  cout << count << endl;

  return 0;
}