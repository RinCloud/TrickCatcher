#include <iostream>
#include <string>

using namespace std;

int main() {
  string S;
  cin >> S;

  int north = 0;
  int west = 0;

  for (char c : S) {
    if (c == 'N') {
      north++;
    } else if (c == 'W') {
      west++;
    } else if (c == 'S') {
      north--;
    } else if (c == 'E') {
      west--;
    }
  }

  if (north == 0 && west == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}