#include <iostream>
#define MOD 1000000007
using namespace std;

int main() {
    int N;
    cin >> N;

    // Calculating the sum of scores over all possible permutations
    long long totalScore = 1;
    for (int i = 2; i <= N; i++) {
        totalScore = (totalScore * i) % MOD;
    }

    cout << totalScore << endl;

    return 0;
}
