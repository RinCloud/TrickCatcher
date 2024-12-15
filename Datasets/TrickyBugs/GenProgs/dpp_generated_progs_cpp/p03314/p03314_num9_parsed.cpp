#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int N, K, M;
    cin >> N >> K >> M;

    vector<int> A(M);
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }

    vector<long long> dp(N + 1);
    vector<long long> sum(N + 1);

    int left = 1;
    unordered_map<int, int> count;
    long long result = 0;

    for (int right = 1; right <= N; right++) {
        int num = A[right % M];
        count[num]++;

        while (count[num] > 1) {
            int leftNum = A[left % M];
            count[leftNum]--;
            left++;
        }

        dp[right] = dp[right - 1] + (right - left + 1);
        sum[right] = (sum[right - 1] + dp[right]) % MOD;
        result = (result + sum[right]) % MOD;
    }

    cout << result << endl;

    return 0;
}