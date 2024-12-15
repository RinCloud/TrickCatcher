#include <iostream>
using namespace std;

const int MOD = 998244353;

int main() {
    int N, K;
    cin >> N >> K;

    // Initialize counts for blue and red balls
    int blueCount = 0;
    int redCount = 0;

    // Calculate the total combinations
    long long totalCombinations = 1;

    for (int i = 0; i < K; i++) {
        char ballColor;
        cin >> ballColor;

        if (ballColor == 'B') {
            blueCount++;
            totalCombinations = (totalCombinations * redCount) % MOD;
        } else {
            redCount++;
            totalCombinations = (totalCombinations * blueCount) % MOD;
        }
    }

    cout << totalCombinations << endl;

    return 0;
}