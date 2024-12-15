#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // The number of semi-common multiples
    int count = 0;

    // Iterate over each number between 1 and M (inclusive)
    for (int X = 1; X <= M; X++) {
        bool isSemiCommonMultiple = true;

        // Check if X is a semi-common multiple for each number in A
        for (int k = 0; k < N; k++) {
            int p = (int)((2.0 * X) / A[k] - 1.0);

            if (p < 0 || (2 * X) != A[k] * (p + 0.5)) {
                isSemiCommonMultiple = false;
                break;
            }
        }

        if (isSemiCommonMultiple) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}