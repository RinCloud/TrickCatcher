#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> roads(N, 0);

  for (int i = 0; i < M; i++) {
    int a, b;
    cin >> a >> b;

    roads[a - 1]++;
    roads[b - 1]++;
  }

  for (int i = 0; i < N; i++) {
    cout << roads[i] << endl;
  }

  return 0;
}