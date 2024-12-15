#include <iostream>
#include <vector>
#include <unordered_map>

#define MOD 1000000007

using namespace std;

int main() {
    int N, K, M;
    cin >> N >> K >> M;

    vector<int> A(M);
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }

    vector<long long> dp(N + 1, 0);
    unordered_map<int, int> count;
    long long ans = 0;

    int uniqueCount = 0;
    int left = 0;

    for (int right = 0; right < N; right++) {
        int current = A[right];
        count[current]++;

        if (count[current] == 1) {
            uniqueCount++;
        }

        while (uniqueCount == K) {
            ans += N - right;
            ans %= MOD;

            int leftValue = A[left];
            count[leftValue]--;

            if (count[leftValue] == 0) {
                uniqueCount--;
            }

            left++;
        }
    }

    cout << ans << endl;

    return 0;
}