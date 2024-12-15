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
    vector<i64> cnt(t + 1);
    for (i64 j = 0; j < W; j++)
    {
      vector<i64> col_cnt(t + 1);
      bool valid = true;
      for (i64 k = 0; k < H; k++)
      {
        if (S[k][j] == '1')
          col_cnt[t]++;
        if (i & (1 << k))
        {
          for (i64 kk = 0; kk <= t; kk++)
            cnt[kk] += col_cnt[kk];
        }
        valid &= all_of(cnt.begin(), cnt.end(), [K](i64 x) { return x <= K; });
        if (!valid)
        {
          t++;
          tmp++;
          fill(cnt.begin(), cnt.end(), 0);
          j--;
          break;
        }
      }
    }
    ans = min(ans, tmp);
  }
  cout << ans << endl;
  return 0;
}
