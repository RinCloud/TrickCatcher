#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, P;
    cin >> N >> P;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    long long count = 0;
    for (int i = 0; i < (1 << N); i++) {
        int sum = 0;
        for (int j = 0; j < N; j++) {
            if ((i >> j) & 1) {
                sum += A[j];
            }
        }
        if (sum % 2 == P) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}