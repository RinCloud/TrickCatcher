#include <bits/stdc++.h>

int a[210], n;

int main() {
  scanf("%d", &n);
  n *= 2;
  for (int i = 1; i <= n; i++)
    scanf("%d", a + i);
  std::sort(a + 1, a + n + 1);
  int ans = 0;
  for (int i = n; i >= 2; i -= 2) //use the ith (odd) element from the end instead of the (i-1)th (even) element
    ans += a[i];
  printf("%d", ans);
  return 0;
}