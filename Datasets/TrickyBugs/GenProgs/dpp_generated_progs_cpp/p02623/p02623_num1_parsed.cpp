#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int N, M, K;
  cin >> N >> M >> K;

  vector<int> A(N), B(M);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  for (int i = 0; i < M; i++) {
    cin >> B[i];
  }

  int booksRead = 0;
  int totalTime = 0;
  int i = 0, j = 0;

  while (i < N && totalTime + A[i] <= K) {
    totalTime += A[i];
    i++;
    booksRead++;
  }

  while (j < M && i >= 0) {
    totalTime += B[j];
    j++;

    while (totalTime > K && i > 0) {
      i--;
      totalTime -= A[i];
    }

    if (totalTime <= K) {
      booksRead = max(booksRead, i+j);
    }
  }

  cout << booksRead << endl;

  return 0;
}