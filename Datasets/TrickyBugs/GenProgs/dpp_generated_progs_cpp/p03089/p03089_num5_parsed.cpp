#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> b(N);
  for (int i = 0; i < N; i++) {
    cin >> b[i];
  }

  vector<int> a;
  for (int i = 0; i < N; i++) {
    for (int j = i; j > b[i]; j--) {
      a.insert(a.begin() + j, j);
    }
    if (a.size() != b[i]) {
      cout << -1 << endl;
      return 0;
    }
  }

  for (int i = 0; i < N; i++) {
    cout << a[i] << endl;
  }

  return 0;
}