#include <iostream>
#include <vector>
#include <climits>
using namespace std;

const int INF = 1e9;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to calculate the minimum amount of money required to generate substance C
int calculateMinimumCost(int N, int Ma, int Mb, vector<int>& a, vector<int>& b, vector<int>& c) {
    int maxC = 401;
    vector<vector<vector<int>>> dp(N+1, vector<vector<int>>(maxC, vector<int>(maxC, INF)));

    dp[0][0][0] = 0;
    for (int i = 0; i < N; i++) {
        for (int ca = 0; ca < maxC; ca++) {
            for (int cb = 0; cb < maxC; cb++) {
                if (dp[i][ca][cb] == INF) 
                    continue;
                dp[i+1][ca][cb] = min(dp[i+1][ca][cb], dp[i][ca][cb]);
                dp[i+1][ca+a[i]][cb+b[i]] = min(dp[i+1][ca+a[i]][cb+b[i]], dp[i][ca][cb]+c[i]);
            }
        }
    }

    int minCost = INF;
    for (int ca = 1; ca < maxC; ca++) {
        for (int cb = 1; cb < maxC; cb++) {
            if (ca*Mb == cb*Ma) {
                minCost = min(minCost, dp[N][ca][cb]);
            }
        }
    }

    if (minCost == INF) 
        return -1;
    return minCost;
}

int main() {
    int N, Ma, Mb;
    cin >> N >> Ma >> Mb;

    vector<int> a(N), b(N), c(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }

    int minCost = calculateMinimumCost(N, Ma, Mb, a, b, c);
    cout << minCost << endl;

    return 0;
}