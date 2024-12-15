#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
  int N, D;
  cin >> N >> D;

  vector<int> X(N);
  vector<int> Y(N);
  for (int i = 0; i < N; i++) {
    cin >> X[i] >> Y[i];
  }

  int count = 0;
  for (int i = 0; i < N; i++) {
    if (sqrt(X[i]*X[i] + Y[i]*Y[i]) <= D) {
      count++;
    }
  }

  cout << count << endl;

  return 0;
}