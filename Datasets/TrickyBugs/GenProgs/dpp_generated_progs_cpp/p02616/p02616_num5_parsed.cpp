#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD = 1000000007;

// Function to find the maximum product of K elements
// in an array modulo 10^9+7
int maxProduct(int n, int k, vector<int>& arr) {
    // Sort the array in non-decreasing order
    sort(arr.begin(), arr.end());

    long long int product = 1;

    if (arr[n - 1] <= 0 && k % 2 == 1) {
        // If the maximum element in the array is negative
        // and k is odd, then the maximum product will be
        // negative. So, we need to take the product of
        // k largest negative elements instead.
        int i = n - 1;
        while (k--) {
            product = (product * arr[i] + MOD) % MOD;
            i--;
        }
    } else {
        // If the maximum element in the array is non-negative,
        // then the maximum product will be the product of
        // the k largest elements.
        int i = n - 1;
        int j = 0;
        while (k--) {
            if (i >= 0 && (arr[i] > abs(arr[j]) || j == n - 1)) {
                product = (product * arr[i] + MOD) % MOD;
                i--;
            } else {
                product = (product * arr[j] + MOD) % MOD;
                j++;
            }
        }
    }

    return product;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxProd = maxProduct(n, k, arr);
    cout << maxProd << endl;

    return 0;
}