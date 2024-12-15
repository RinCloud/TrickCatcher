#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;

  vector<long long> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  long long total = 0;
  for (int i = 1; i < N; i++) {
    total += A[i];
  }

  if (total >= A[0]) {
    cout << -1 << endl;
    return 0;
  } else {
    cout << A[0] - total << endl;
    return 0;
  }
}