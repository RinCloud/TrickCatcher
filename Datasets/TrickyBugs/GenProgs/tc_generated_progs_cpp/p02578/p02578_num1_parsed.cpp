#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int N, a, aa, ans = 0;
  cin >> N;
  cin >> aa;
  for (int i = 1; i < N; i++)
  {
    cin >> a;
    if (aa > a)
    {
      ans += aa - a;
    }
    else
    {
      aa = a;
    }
  }
  cout << ans;
  return 0;
}
