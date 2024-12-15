#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> constructSequence(int N, int A, int B) {
    if (A + B > N + 1 || A * B < N) {
        return {};
    }

    vector<int> sequence(N);
    int currentValue = N - max(A, B) + 1;

    if (A > B) {
        for (int i = 0; i < A; i++) {
            sequence[i] = currentValue++;
        }
    } else {
        sequence[A - 1] = N;
        currentValue = N - 1;
    }

    int startIdx = A - 1, endIdx = A;

    while (endIdx < N && currentValue >= 1) {
        if (endIdx - startIdx < B) {
            sequence[endIdx++] = currentValue--;
        } else {
            startIdx = endIdx++;
            sequence[startIdx] = currentValue--;
        }
    }

    if (sequence[N - 1] == 0) {
        return {};
    }

    return sequence;
}

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    vector<int> sequence = constructSequence(N, A, B);

    if (sequence.empty()) {
        cout << "-1" << endl;
    } else {
        for (int i = 0; i < N; i++) {
            cout << sequence[i] << " ";
        }
        cout << endl;
    }

    return 0;
}