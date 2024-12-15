#include <iostream>
#include <cmath>

using namespace std;

long long getNumberOfPatties(int N, long long X) {
    if (N == 0) {
        return 1;
    }
    long long layers = pow(2, N + 1) - 3;
    long long patties = pow(2, N) - 1;
    if (X <= 0) {
        return 0;
    } else if (X <= 1 + layers / 2) {
        return getNumberOfPatties(N - 1, X - 1);
    } else {
        return patties + 1 + getNumberOfPatties(N - 1, X - 2 - layers / 2);
    }
}

int main() {
    int N;
    long long X;
    cin >> N >> X;

    long long result = getNumberOfPatties(N, X);
    cout << result << endl;

    return 0;
}