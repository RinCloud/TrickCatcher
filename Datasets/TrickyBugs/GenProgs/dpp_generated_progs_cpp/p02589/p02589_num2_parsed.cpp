#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
  int N;
  cin >> N;

  vector<string> strings(N);
  for (int i = 0; i < N; i++) {
    cin >> strings[i];
  }

  unordered_set<string> uniqueStrings(strings.begin(), strings.end());

  int count = 0;
  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      string s1 = strings[i];
      string s2 = strings[j];

      if (s1.length() < s2.length()) {
        swap(s1, s2);
      }

      while (s1.length() > s2.length()) {
        s1.erase(0, 1);
      }

      if (s1 == s2 || uniqueStrings.count(s1) > 0) {
        count++;
      }
    }
  }

  cout << count << endl;

  return 0;
}