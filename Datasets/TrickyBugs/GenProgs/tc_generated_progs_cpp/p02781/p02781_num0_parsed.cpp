#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int k;
ll dp[101][4][2];
char s[101];

int main()
{
    scanf(" %s", s + 1); 
    int len = strlen(s + 1);
    scanf("%d", &k);
    
    // initializing dp array
    dp[0][0][0] = 1;

    for (int i = 1; i <= len; i++)
    {
        int c = s[i] - '0';
        for (int j = 0; j <= k; j++)
        {
            dp[i][j][0] += dp[i-1][j][0]; // no increase in non-zero digits
            dp[i][j][0] += dp[i-1][j][1]; // increase the current non-zero digits

            dp[i][j][1] += dp[i-1][j][1]; // carry
            if(c > 0)
            {
                // add all non-zero digits till i-1 digits
                dp[i][j][0] += dp[i-1][j-1][0] * 9;
                
                // add all non-zero digits till i-1 and c-1 is less than c
                dp[i][j][0] += dp[i-1][j-1][1] * (c-1);

                // add c as n-th non-zero digit
                dp[i][j][1] += dp[i-1][j-1][0];
            }
        }
    }

    printf("%lld\n", dp[len][k][0] + dp[len][k][1]);
    
    return 0;
}
