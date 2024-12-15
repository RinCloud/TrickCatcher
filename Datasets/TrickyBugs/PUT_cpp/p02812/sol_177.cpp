#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;
  S = regex_replace(S, regex("ABC"), "a");
  cout << count(S.begin(), S.end(), 'a') << "\n";
}