#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  vector<int> P(N);
  for (int i = 0; i < N; i++) {
    cin >> P[i];
  }
  
  vector<int> X, Y;
  vector<int> S(N, 0);
  for (int i = 0; i < N; i++) {
    if (P[i] > i + 1) {
      S[i] = 1;
    }
  }
  
  for (int i = 0; i < N; i++) {
    if (S[i] == 0) {
      X.push_back(P[i]);
    } else {
      Y.push_back(P[i]);
    }
  }
  
  if (X.size() != Y.size()) {
    cout << -1 << endl;
  } else {
    sort(X.begin(), X.end());
    sort(Y.begin(), Y.end());
    string s = "";
    for (int i = 0; i < N; i++) {
      if (S[i] == 0) {
        s += "0";
      } else {
        s += "1";
      }
    }
    cout << s << endl;
  }
  return 0;
}