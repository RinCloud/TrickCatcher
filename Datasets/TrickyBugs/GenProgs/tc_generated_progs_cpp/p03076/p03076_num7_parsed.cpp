#include <iostream>
using namespace std;
typedef long long ll;

int main(void) {
  int i, j, k, min = 10, a, ans = 0;
  for(i = 0; i < 5; ++i) {
    cin >> a;
    ans += (a + 9) / 10 * 10;
    if(a % 10 && min > a % 10) min = a % 10;
  }
  cout << ans - 10 + min << endl;
  return 0;
}
