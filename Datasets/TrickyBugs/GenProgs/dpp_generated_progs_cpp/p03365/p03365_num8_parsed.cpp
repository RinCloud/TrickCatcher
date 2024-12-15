#include <iostream>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N;
    cin >> N;

    // Calculate the sum of the scores over all permutations
    long long sum = 0;
    
    // Iterate through all possible permutations
    for (int i = 1; i <= N; i++) {
        // Calculate the score for permutation i
        // The score equals to (N-i+1) * (i!) * ((N-i)!)
        long long score = (N - i + 1) * i;
        for (int j = 2; j <= N - i; j++) {
            score = (score * j) % MOD;
        }
        sum = (sum + score) % MOD;
    }

    cout << sum << endl;

    return 0;
}