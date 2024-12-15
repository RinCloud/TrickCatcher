#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
#define endl "\n"

int main()
{
  i64 H, W, K;
  cin >> H >> W >> K;
  vector<string> S(H);
  for (i64 i = 0; i < H; i++)
    cin >> S[i];
  i64 ans = H * W;
  for (i64 i = 0; i < (1 << (H - 1)); i++)
  {
    i64 t = 0;
    for (i64 j = 0; j < (H - 1); j++)
      if (i & (1 << j))
        t++;
    i64 tmp = t;
    vector<i64> cnt(W);
    for (i64 j = 0; j < W; j++)
    {
      i64 tt = 0;
      for (i64 k = 0; k < H; k++)
      {
        if (S[k][j] == '1')
          cnt[tt]++;
        if (i & (1 << k))
          tt++;
      }
      for (i64 k : cnt)
        if (K < k)
        {
          tmp++;
          cnt = vector<i64>(W);
          break;
        }
    }
    ans = min(ans, tmp);
  }
  cout << ans << endl;
  return 0;
}
