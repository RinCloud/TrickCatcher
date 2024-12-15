#include <iostream>

using namespace std;

int main() {
  long long N, A, B;
  cin >> N >> A >> B;

  long long blue_balls = A * (N / (A + B));
  blue_balls += min(A, N % (A + B));

  cout << blue_balls << endl;

  return 0;
}