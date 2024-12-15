#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N, K;
    cin >> N >> K;

    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    long long max_product = 1;

    if (A[N - 1] <= 0 && K % 2 == 1) {
        for (int i = N - 1; i >= N - K; i--) {
            max_product = (max_product * A[i]) % MOD;
        }
    } else {
        int left = 0;
        int right = N - 1;
        if (K % 2 == 1) {
            max_product = A[right];
            right--;
            K--;
        }
        for (int i = 0; i < K / 2; i++) {
            long long product1 = (A[left] * A[left + 1]) % MOD;
            long long product2 = (A[right] * A[right - 1]) % MOD;
            if (product1 > product2) {
                max_product = (max_product * product1) % MOD;
                left += 2;
            } else {
                max_product = (max_product * product2) % MOD;
                right -= 2;
            }
        }
    }

    cout << max_product << endl;

    return 0;
}