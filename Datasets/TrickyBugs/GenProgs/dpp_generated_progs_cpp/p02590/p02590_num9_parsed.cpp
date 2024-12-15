#include <iostream>
#include <vector>

using namespace std;

const int P = 200003;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    long long sum = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            sum += (1LL * A[i] * A[j]) % P;
        }
    }

    cout << sum << endl;

    return 0;
}
