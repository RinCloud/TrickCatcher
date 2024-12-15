#include <iostream>
#include <cmath>
#include <string>

using namespace std;

bool isSquare(int num) {
  int sqrtNum = sqrt(num);
  return sqrtNum * sqrtNum == num;
}

int main() {
  int a, b;
  cin >> a >> b;

  string ab = to_string(a) + to_string(b);
  int concatNum = stoi(ab);

  if (isSquare(concatNum)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}