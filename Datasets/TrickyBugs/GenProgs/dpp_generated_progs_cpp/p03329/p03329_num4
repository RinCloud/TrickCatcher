#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int N;
  cin >> N;

  int ans = N;
  for (int i = 0; i <= N; i++) {
    int cnt = 0;
    int money = i;
    while (money > 0) {
      int digit = money % 6;
      if (digit == 1 || digit == 5) {
        break;
      }
      cnt++;
      money /= 6;
    }
    cnt += N - pow(6, cnt);
    ans = min(ans, cnt);
  }

  cout << ans << endl;

  return 0;
}