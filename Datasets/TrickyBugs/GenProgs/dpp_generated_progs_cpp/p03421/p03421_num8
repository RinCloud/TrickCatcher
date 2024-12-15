#include <iostream>
#include <vector>

using namespace std;

vector<int> constructSequence(int N, int A, int B) {
    if (A > B || B > 2 * A || (A == 1 && N > 2) || (B == 1 && N > 2)) {
        return vector<int>();
    }

    vector<int> sequence(N, 0);
    int current = 0;

    for (int i = 0; i < A; i++) {
        sequence[i] = i + 1;
        current = i + 1;
    }

    int decreasingLength = min(B - 1, N - A);

    for (int i = A; i < A + decreasingLength; i++) {
        sequence[i] = current - 1;
        current = current - 1;
    }

    for (int i = A + decreasingLength; i < N; i++) {
        sequence[i] = current + 1;
        current = current + 1;
    }

    return sequence;
}

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    vector<int> sequence = constructSequence(N, A, B);

    if (sequence.empty()) {
        cout << -1;
    } else {
        for (int i : sequence) {
            cout << i << " ";
        }
    }

    return 0;
}