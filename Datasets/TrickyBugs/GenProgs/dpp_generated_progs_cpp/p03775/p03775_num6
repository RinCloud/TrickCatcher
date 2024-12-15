#include <iostream>
#include <cmath>

using namespace std;

int findMinF(int N) {
    int minF = INT_MAX;
    for (int A = 1; A <= sqrt(N); A++) {
        if (N % A == 0) {
            int B = N / A;
            int numDigitsA = log10(A) + 1;
            int numDigitsB = log10(B) + 1;
            int currentF = max(numDigitsA, numDigitsB);
            minF = min(minF, currentF);
        }
    }
    return minF;
}

int main() {
    int N;
    cin >> N;
    cout << findMinF(N) << endl;

    return 0;
}