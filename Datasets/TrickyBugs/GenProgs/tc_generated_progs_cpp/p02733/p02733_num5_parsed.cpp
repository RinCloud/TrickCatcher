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
  i64 ans = H * W; // Initialize ans to maximum possible cuts
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
      vector<i64> temp_cnt(t + 1); // Create a temporary count vector
      for (i64 k = 0; k < H; k++)
      {
        if (S[k][j] == '1')
          temp_cnt[min(k - t, t)]++; // Update temporary count vector based on current column
      }
      i64 cut_needed = 0;
      for (i64 k : temp_cnt)
        if (K < k)
          cut_needed++; // Calculate additional cut needed for this column
      if (cut_needed > 0)
        tmp += cut_needed - 1; // Update total cuts needed
    }
    ans = min(ans, tmp);
  }
  cout << ans << endl;
  return 0;
}
