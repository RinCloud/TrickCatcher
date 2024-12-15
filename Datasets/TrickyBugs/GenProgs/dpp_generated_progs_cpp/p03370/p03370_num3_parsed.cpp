#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N, X;
  cin >> N >> X;

  vector<int> m(N);
  for (int i = 0; i < N; i++) {
    cin >> m[i];
  }

  int minMoto = *min_element(m.begin(), m.end());

  int minDoughnuts = X / minMoto;

  int maxDoughnuts = minDoughnuts + N - 1;

  cout << maxDoughnuts << endl;

  return 0;
}