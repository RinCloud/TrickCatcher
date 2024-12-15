#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

// Function to calculate factorial
int fact(int n) {
    int res = 1;
    for (int i = 2; i <= n; i++) {
        res = (res * i) % MOD;
    }
    return res;
}

// Function to calculate power
int power(int a, int b) {
    int res = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            res = (res * a) % MOD;
        }
        a = (a * a) % MOD;
        b = b / 2;
    }
    return res;
}

// Function to calculate modular inverse
int modInverse(int a) {
    return power(a, MOD - 2);
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(M);
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }

    // Calculate the number of permutations where Player 1 becomes the champion
    int permCount = fact(1 << N);

    for (int i = 0; i < M; i++) {
        permCount = (permCount * modInverse(fact(A[i]))) % MOD;
    }

    cout << permCount << endl;

    return 0;
}