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
  i64 ans = H * W; // Changed (H-1)*(W-1) to H*W to initialize with a larger value
  bool cc = false;
  for (i64 i = 0; i < (1 << (H - 1)); i++)
  {
    i64 t = 0;
    for (i64 j = 0; j < (H - 1); j++)
      if (i & (1 << j))
        t++;
    i64 tmp = t;
    vector<i64> cnt(W); // Changed t+1 to W in cnt vector declaration
    for (i64 j = 0; j < W; j++)
    {
    con:;
      i64 tt = 0;
      for (i64 k = 0; k < H; k++)
      {
        if (S[k][j] == '1')
          cnt[j]++; // Changed cnt[tt] to cnt[j] to count white squares in the same column
        if (i & (1 << k))
          tt++;
      }
      for (i64 k : cnt)
        if (K < k)
        {
          tmp++;
          cnt = vector<i64>(W, 0); // changed t+1 to W to reset cnt vector size and values
          if (cc)
            goto en;
          cc = true;
          goto con;
        }
      cc = false;
    }
    ans = min(ans, tmp);
  en:;
  }
  cout << ans << endl;
  return 0;
}
