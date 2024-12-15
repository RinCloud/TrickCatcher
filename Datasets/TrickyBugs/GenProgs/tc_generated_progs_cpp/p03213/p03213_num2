#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  int v[N + 1] = {0};
  for(int i = 1; i <= N; ++i) {
    int tmp = i;
    for(int j = 2; j <= N; ++j) {
      while(tmp % j == 0 && tmp != 1) {
        tmp = tmp / j;
        v[j] += 1;
      }
    }
  }

  int ans_v[75] = {0};
  for(int i = 2; i <= 74; ++i) {
    int tmp = 0;
    for(int k = 2; k <= N; ++k) {
      if(v[k] >= i) {
        tmp += 1;
      }
    }
    ans_v[i] = tmp;
  }

  int ans = ans_v[74] + ans_v[24] * (ans_v[2]-1) + ans_v[14] * (ans_v[4]-1) + ans_v[4] * (ans_v[4]-1) * (ans_v[2]-2) / 2;
  cout << ans;

  return 0;
}