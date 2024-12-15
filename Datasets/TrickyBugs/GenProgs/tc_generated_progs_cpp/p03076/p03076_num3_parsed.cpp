#include <stdio.h>
using namespace std;
typedef long long ll;

int main(void) {
  int i, j, k, min = 10, a, ans = 0;
  for(i = 0; i < 5; ++i) {
    scanf("%d", &a);
    ans += (a + 9) / 10 * 10;
    if(a % 10 && min > a % 10) min = a % 10;
  }
  printf("%d", ans - 10 + min);
  return 0;
}
