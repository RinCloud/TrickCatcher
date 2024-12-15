#include <cstdio>

int main()
{
  long long N;
  scanf("%lld", &N);
  printf("%lld\n", (N * (N + 1) / 2) - N);
  return 0;
}
