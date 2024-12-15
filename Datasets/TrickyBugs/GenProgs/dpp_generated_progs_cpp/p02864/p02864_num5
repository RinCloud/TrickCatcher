#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> H(N);
    for (int i = 0; i < N; i++) {
        cin >> H[i];
    }

    vector<int> prefix_sum(N);
    prefix_sum[0] = H[0];
    for (int i = 1; i < N; i++) {
        prefix_sum[i] = prefix_sum[i-1] + H[i];
    }

    int min_operations = 1e9;
    for (int i = 0; i <= K; i++) {
        for (int j = 0; j <= N - K; j++) {
            vector<int> bottom_sum;
            if (j == 0) {
                bottom_sum = {0};
            } else {
                bottom_sum = {prefix_sum[j-1]};
            }
            for (int k = j + K; k < N; k++) {
                bottom_sum.push_back(prefix_sum[k] - prefix_sum[k-K]);
            }
            sort(bottom_sum.begin(), bottom_sum.end());
            int operations = prefix_sum[N-1] - bottom_sum.back() + (bottom_sum.size() - 1);
            min_operations = min(min_operations, operations);
        }
    }

    cout << min_operations << endl;

    return 0;
}