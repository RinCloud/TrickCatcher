#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int sum = 0;
    for (int i = 0; i < N; i += 2) {
        sum += max(A[i], A[i + 1]);
    }

    cout << sum << endl;

    return 0;
}