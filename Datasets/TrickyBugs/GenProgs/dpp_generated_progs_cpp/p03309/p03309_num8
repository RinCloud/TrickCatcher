#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int b = A[0] - 1;
    int minSadness = 0;
    for (int i = 0; i < N; i++) {
        minSadness += abs(A[i] - (b + i + 1));
    }

    for (int i = 1; i < N; i++) {
        b = min(A[i] - i - 1, b);
    }

    minSadness = min(minSadness, 2 * N - 1 - b);

    cout << minSadness << endl;

    return 0;
}