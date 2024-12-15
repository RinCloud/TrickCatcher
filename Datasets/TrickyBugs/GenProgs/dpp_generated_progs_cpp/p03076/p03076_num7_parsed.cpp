#include <iostream>
using namespace std;

int main() {
  int A, B, C, D, E;
  cin >> A >> B >> C >> D >> E;

  int first_order = max(max(max(A, B), max(C, D)), E);

  int time = (first_order + 9) / 10 * 10;

  int remaining_time = max(max(max(time - A, time - B), max(time - C, time - D)), time - E);

  cout << time + remaining_time << endl;

  return 0;
}