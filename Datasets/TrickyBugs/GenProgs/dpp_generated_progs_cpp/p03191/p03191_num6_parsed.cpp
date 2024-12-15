#include <iostream>
#include <vector>
#include <algorithm>
 
#define MOD 1000000007
 
using namespace std;
 
int N;
vector<int> A;
 
vector<int> findSubsequence(int start, int end)
{
    vector<int> sub;
    for(int i = start; i <= end; i++)
    {
        if(A[i] != -1)
            sub.push_back(A[i]);
    }
    return sub;
}
 
int numOfSequences(int n, int m)
{
    vector<int> dp(n+1, 0);
    dp[0] = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = min(i, m); j >= 1; j--)
        {
            dp[j] = (dp[j]%MOD + dp[j-1]%MOD)%MOD;
        }
    }
    return dp[m];
}
 
int main()
{
    cin >> N;
    A.resize(2*N);
    for(int i = 0; i < 2*N; i++)
    {
        cin >> A[i];
    }
 
    vector<int> aIdx;
    for(int i = 0; i < 2*N; i++)
    {
        if(A[i] == -1)
            aIdx.push_back(i);
    }
 
    int cnt = 0;
    for(int mask = 0; mask < (1<<aIdx.size()); mask++)
    {
        vector<int> B;
        int idx = 0;
        for(int i = 0; i < 2*N; i++)
        {
            if(A[i] == -1)
            {
                if(mask&(1<<idx))
                    B.push_back(aIdx[idx]+1);
                else
                    B.push_back(aIdx[idx+1]+1);
                idx++;
            }
        }
        vector<int> sub = findSubsequence(0, N-1);
        sort(sub.begin(), sub.end());
        cnt = (cnt%MOD + numOfSequences(sub.size(), N)%MOD)%MOD;
    }
 
    cout << cnt << endl;
 
    return 0;
}