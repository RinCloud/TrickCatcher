#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    int size = 1 << N;
    vector<int> A(size);
    for (int i = 0; i < size; i++) {
        cin >> A[i];
    }

    vector<int> dp(size, 0);
    for (int K = 1; K < size; K++) {
        int maxVal = 0;
        for (int i = 0; i < K; i++) {
            for (int j = i + 1; j <= K; j++) {
                maxVal = max(maxVal, A[i] + A[j]);
            }
        }
        dp[K] = maxVal;
    }

    for (int i = 1; i < size; i++) {
        cout << dp[i] << endl;
    }

    return 0;
}