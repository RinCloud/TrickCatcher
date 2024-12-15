#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M, Q;
    cin >> N >> M >> Q;

    // Read the train routes
    vector<int> L(M), R(M);
    for (int i = 0; i < M; i++) {
        cin >> L[i] >> R[i];
    }

    // Process the queries
    for (int i = 0; i < Q; i++) {
        int p, q;
        cin >> p >> q;

        // Count the trains that run strictly within the section from City p to City q
        int count = 0;
        for (int j = 0; j < M; j++) {
            if (L[j] >= p && R[j] <= q) {
                count++;
            }
        }

        // Output the result
        cout << count << endl;
    }

    return 0;
}