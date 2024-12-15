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

    sort(A.begin(), A.end());

    int b = 0;
    long long minSadness = 1e18;
    while (true) {
        long long sadness = 0;
        for (int i = 0; i < N; i++) {
            sadness += abs(A[i] - (b + i + 1));
        }

        minSadness = min(minSadness, sadness);

        if (b == 1e9) {
            break;
        }

        b++;
    }

    cout << minSadness << endl;

    return 0;
}