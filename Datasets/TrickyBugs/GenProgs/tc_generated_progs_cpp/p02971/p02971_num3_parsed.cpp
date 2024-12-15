#include <stdio.h>
#include <algorithm>

int main() {
  int N;
  scanf("%d", &N);
  int a[N];
  for (int i = 0; i < N; i++){
    scanf("%d", &a[i]);
  }
  int max = 0;
  for (int i = 0; i < N; i++) {
    max = std::max(max, a[i]);
  }
  for (int i = 0; i < N; i++) {
    int result;
    if (a[i] == max) {
      result = *std::max_element(a, a + i);
    } else {
      result = max;
    }
    printf("%d\n", result);
  }
}