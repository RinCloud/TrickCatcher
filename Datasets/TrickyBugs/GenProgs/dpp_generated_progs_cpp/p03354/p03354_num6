#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Read input
    int N, M;
    cin >> N >> M;

    vector<int> p(N);
    for (int i = 0; i < N; i++) {
        cin >> p[i];
    }

    vector<int> x(M), y(M);
    for (int i = 0; i < M; i++) {
        cin >> x[i] >> y[i];
    }

    // Initialize count
    int count = 0;

    // Traverse the permutation
    for (int i = 0; i < N; i++) {
        // Check if i-th position matches i
        if (p[i] == i + 1) {
            count++;
        }
    }

    // Perform swaps to maximize the count
    for (int i = 0; i < M; i++) {
        swap(p[x[i] - 1], p[y[i] - 1]);

        // Update count if needed
        if (p[x[i] - 1] == x[i]) {
            count++;
        }
        if (p[y[i] - 1] == y[i]) {
            count++;
        }
    }

    // Output the result
    cout << count << endl;

    return 0;
}