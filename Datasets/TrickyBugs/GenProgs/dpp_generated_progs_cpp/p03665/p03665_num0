#include<iostream>
#include<vector>
using namespace std;

int main() {
    int N, P;
    cin >> N >> P;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int count = 0;
    for (int mask = 0; mask < (1 << N); mask++) {
        int sum = 0;
        for (int i = 0; i < N; i++) {
            if (mask & (1 << i)) {
                sum += A[i];
            }
        }
        if (sum % 2 == P) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}