#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;

  int count = 0;
  for (int i = 0; i < N - 2; i++) {
    if (S[i] == 'A' && S[i + 1] == 'B' && S[i + 2] == 'C') {
      count++;
    }
  }

  cout << count << '\n';
}
