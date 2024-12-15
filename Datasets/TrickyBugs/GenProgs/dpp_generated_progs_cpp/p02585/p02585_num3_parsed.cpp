#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N, K;
  cin >> N >> K;

  vector<int> P(N), C(N);
  for (int i = 0; i < N; i++) {
    cin >> P[i];
    P[i]--;
  }

  for (int i = 0; i < N; i++) {
    cin >> C[i];
  }

  long long maxScore = -1e18;
  for (int start = 0; start < N; start++) {
    int current = start;
    long long score = 0;

    vector<int> visited;
    while (true) {
      current = P[current];
      score += C[current];
      visited.push_back(current);

      if (current == start) {
        break;
      }
    }

    int cycleSize = visited.size();
    long long cycleScore = 0;

    for (int i = 0; i < cycleSize; i++) {
      cycleScore += C[visited[i]];
      if (i + 1 > K) {
        break;
      }

      int remainingMoves = K - i - 1;
      long long currentScore = cycleScore;
      if (score > 0) {
        currentScore += (remainingMoves / cycleSize) * score;
      }

      maxScore = max(maxScore, currentScore);
    }
  }

  cout << maxScore << endl;

  return 0;
}