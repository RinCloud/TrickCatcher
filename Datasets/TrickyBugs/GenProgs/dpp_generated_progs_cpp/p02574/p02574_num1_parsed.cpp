#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to calculate the greatest common divisor (GCD) of two numbers
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int gcdAll = A[0];
    int gcdPairwise = A[0];
    for (int i = 1; i < N; i++) {
        gcdAll = gcd(gcdAll, A[i]);
        gcdPairwise = gcd(gcdPairwise, A[i]);
    }

    if (gcdAll != 1) {
        cout << "not coprime" << endl;
    } else if (gcdPairwise == 1) {
        cout << "pairwise coprime" << endl;
    } else {
        cout << "setwise coprime" << endl;
    }

    return 0;
}