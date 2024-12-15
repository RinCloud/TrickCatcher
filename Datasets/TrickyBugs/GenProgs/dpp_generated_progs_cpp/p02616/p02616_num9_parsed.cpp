#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Sort the array in ascending order
    sort(A.begin(), A.end());

    // Maximum product of K elements
    long long product = 1;

    if (A[N - 1] <= 0 && K % 2 == 1) {
        // If all elements are non-positive and K is odd, choose K elements with smallest absolute values
        for (int i = 0; i < K; i++) {
            product = (product * A[i]) % MOD;
        }
    } else {
        int left = 0, right = N - 1;
        
        if (K % 2 == 1) {
            // Choose the largest element
            product *= A[right];
            right--;
            K--;
        }
        
        while (K > 0) {
            if (A[left] * A[left + 1] > A[right] * A[right - 1]) {
                product = (product * A[left] % MOD * A[left + 1] % MOD) % MOD;
                left += 2;
            } else {
                product = (product * A[right] % MOD * A[right - 1] % MOD) % MOD;
                right -= 2;
            }
            K -= 2;
        }
    }

    if (product < 0) {
        product += MOD;
    }

    cout << product << endl;

    return 0;
}