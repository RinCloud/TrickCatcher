#include <iostream>
using namespace std;

int main(void) {
  int i, a, ans = 0;
  int min = 10;
  for(i = 0; i < 5; ++i) {
    cin >> a;
    ans += (a + 9) / 10 * 10;
    if(a % 10 && min > a % 10) min = a % 10;
  }
  cout << ans - 10 + min;
  return 0;
}
