#include<bits/stdc++.h>
using namespace std;
int dp[2][100][4], k;
char s[101];
int main()
{
    scanf(" %s", s + 1); int len = strlen(s + 1);
    scanf("%d", &k);
    dp[1][0][0] = 1;
    for (int i = 1, c; i <= len; i++)
    {
        c = s[i] - '0';
        for (int j = 0; j <= k; j++)
        {
            dp[0][i][j] = dp[0][i - 1][j];
            if (c) dp[0][i][j] += dp[1][i - 1][j];
            if (j) dp[0][i][j] += dp[0][i - 1][j - 1] * 9 + dp[1][i - 1][j - 1] * max(0, c - 1);
            if (j || !c) dp[1][i][j] = dp[1][i - 1][j] + dp[1][i - 1][j - (c > 0)]; 
        }
    }
    printf("%d\n", dp[0][len][k] + dp[1][len][k]);
    return 0;
}