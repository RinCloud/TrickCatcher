#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> V(N);
    for (int i = 0; i < N; i++) {
        cin >> V[i];
    }

    int ans = 0;

    // Case 1: All operations are A or B
    for (int i = 0; i <= min(N, K); i++) {
        for (int j = 0; i + j <= min(N, K); j++) {
            vector<int> jewels;

            // Taking out the jewels from the left
            for (int k = 0; k < i; k++) {
                jewels.push_back(V[k]);
            }

            // Taking out the jewels from the right
            for (int k = N - 1; k >= N - j; k--) {
                jewels.push_back(V[k]);
            }

            // Sorting the jewels
            sort(jewels.begin(), jewels.end());

            // Taking the maximum number of jewels from the sorted jewels
            int sum = 0;
            for (int k = 0; k + (K - i - j) < jewels.size() && jewels[k] < 0; k++) {
                sum -= jewels[k];
            }

            ans = max(ans, sum);
        }
    }

    // Case 2: Combination of C and D operations
    for (int i = 0; i <= min(N, K); i++) {
        for (int j = 0; i + j <= min(N, K); j++) {
            int sum = 0;

            // Choosing the jewels for C operations
            vector<int> c_jewels;
            for (int k = 0; k < i; k++) {
                c_jewels.push_back(V[k]);
            }

            // Choosing the jewels for D operations
            vector<int> d_jewels;
            for (int k = N - 1; k >= N - j; k--) {
                d_jewels.push_back(V[k]);
            }

            // Sorting the jewels for C operations in ascending order
            sort(c_jewels.begin(), c_jewels.end());
            // Sorting the jewels for D operations in descending order
            sort(d_jewels.begin(), d_jewels.end(), greater<int>());

            // Calculating the sum of the jewels from C operations
            for (int k = 0; k < c_jewels.size() && k < K - i - j; k++) {
                if (c_jewels[k] < 0) {
                    break;
                }
                sum += c_jewels[k];
            }

            // Calculating the sum of the jewels from D operations
            for (int k = 0; k < d_jewels.size() && k < K - i - j; k++) {
                if (d_jewels[k] < 0) {
                    break;
                }
                sum += d_jewels[k];
            }

            ans = max(ans, sum);
        }
    }

    cout << ans << endl;

    return 0;
}