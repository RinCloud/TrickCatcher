#include <iostream>
int main()
{
  long N, ans;
  cin >> N;
  if (N % 2 != 0)
  {
    ans = 0;
  }
  else
  {
    ans = 0;
    for (long i = 5; i <= N; i *= 5)
    {
      ans += N / i;
    }
  }

  cout << ans;
}