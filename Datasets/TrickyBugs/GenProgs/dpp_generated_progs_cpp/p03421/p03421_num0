#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    if (A + B > N + 1 || A * B < N) {
        cout << -1 << endl;
        return 0;
    }

    vector<int> sequence(N);
    for (int i = 0; i < B; i++) {
        sequence[i] = i + 1;
    }

    int remaining = A - 1;
    int i = B;
    int j = N;
    while (remaining > 0) {
        int k = min(remaining, j - i);
        for (int l = i + k - 1; l >= i; l--) {
            sequence[l] = j;
            j--;
        }
        i += k;
        remaining -= k;
    }

    for (int k = 0; k < N; k++) {
        if (sequence[k] == 0) {
            sequence[k] = k + 1;
        }
    }

    for (int k = 0; k < N; k++) {
        cout << sequence[k] << " ";
    }
    cout << endl;

    return 0;
}