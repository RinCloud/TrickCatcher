#include <iostream>
#include <vector>
#include <algorithm>

#define MOD 998244353 

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> points(N);
    for (int i = 0; i < N; i++) {
        cin >> points[i].first >> points[i].second;
    }

    sort(points.begin(), points.end());

    vector<long long> prefixSum(N);
    prefixSum[0] = points[0].second;

    for (int i = 1; i < N; i++) {
        prefixSum[i] = prefixSum[i - 1] + points[i].second;
    }

    long long result = 0;

    for (int i = 0; i < N; i++) {
        long long sum = (prefixSum[N - 1] - prefixSum[i]) % MOD;
        long long f = (sum * (i + 1)) % MOD;

        result = (result + f) % MOD;
    }

    cout << result << endl;

    return 0;
}