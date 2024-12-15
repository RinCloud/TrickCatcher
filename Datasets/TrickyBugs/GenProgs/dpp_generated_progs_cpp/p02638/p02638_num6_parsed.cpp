#include <iostream>
#include <vector>

using namespace std;

// Function to calculate the factorial of a number modulo P
long long factorial(int n, int P) {
    long long res = 1;
    for (int i = 2; i <= n; i++) {
        res = (res * i) % P;
    }
    return res;
}

// Function to calculate the power of a number modulo P
long long power(int x, int y, int P) {
    if (y == 0) {
        return 1;
    }
    long long res = 1;
    while (y > 0) {
        if (y % 2 == 1) {
            res = (res * x) % P;
        }
        x = (x * x) % P;
        y = y / 2;
    }
    return res;
}

// Function to calculate the number of graphs modulo P
int calculateGraphs(int N, int K, int P) {
    int mod = 998244353;

    // Calculate inverse modulo P
    int invP = power(mod, P - 2, P);

    // Calculate the number of graphs
    long long res = 1;
    for (int i = 1; i <= N; i++) {
        res = (res * i) % P;
    }

    for (int i = 1; i < K; i++) {
        res = (res * invP) % P;
    }

    return res;
}

int main() {
    int N, K, P;
    cin >> N >> K >> P;

    int numberOfGraphs = calculateGraphs(N, K, P);
    cout << numberOfGraphs << endl;

    return 0;
}
