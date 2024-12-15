#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  int x = (N + 99) / 111;
  cout << x * 111 << endl;

  return 0;
}