#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  sort(A.begin(), A.end());

  int total_cost = 0;
  for (int i = 0; i < N; i++) {
    total_cost += A[i];
  }

  for (int i = 0; i < M; i++) {
    if (A[N-1] <= total_cost) break;
    total_cost -= A[N-1];
    A[N-1] /= 2;
    sort(A.begin(), A.end());
  }

  cout << total_cost << endl;

  return 0;
}