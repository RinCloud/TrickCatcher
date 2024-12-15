#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;

    int n = S.length();
    int maxK = 1;

    // Iterate over all possible values of K
    for (int K = 1; K <= n; K++) {

        // Iterate over all possible starting positions of the segment [l, r]
        for (int l = 0; l <= n - K; l++) {
            int r = l + K - 1;

            // Check if the segment can be transformed into all zeros
            bool allZeros = true;
            for (int i = l; i <= r; i++) {
                if (S[i] != '0') {
                    allZeros = false;
                    break;
                }
            }

            // If the segment can be transformed into all zeros, update maxK
            if (allZeros) {
                maxK = max(maxK, K);
            }
        }
    }

    cout << maxK << endl;

    return 0;
}