#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> a(N);
  for (int i = 0; i < N; i++) {
    cin >> a[i];
  }

  vector<vector<int>> x(N, vector<int>(N, 0));
  for (int i = 0; i < N; i++) {
    x[0][i] = a[i];
  }

  for (int i = 1; i < N; i++) {
    for (int j = 0; j < N - i; j++) {
      x[i][j] = abs(x[i-1][j] - x[i-1][j+1]);
    }
  }

  cout << x[N-1][0] << endl;

  return 0;
}