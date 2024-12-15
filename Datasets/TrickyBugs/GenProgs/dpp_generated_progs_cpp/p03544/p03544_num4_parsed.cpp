#include <iostream>
using namespace std;

long long nthLucas(int N) {
    long long L0 = 2; // the 0-th Lucas number
    long long L1 = 1; // the 1-st Lucas number

    if (N == 0)
        return L0;
    else if (N == 1)
        return L1;

    long long Ln = 0;
    for (int i = 2; i <= N; i++) {
        Ln = L0 + L1;
        L0 = L1;
        L1 = Ln;
    }
    return Ln;
}

int main() {
    int N;
    cin >> N;

    long long result = nthLucas(N);
    cout << result << endl;

    return 0;
}