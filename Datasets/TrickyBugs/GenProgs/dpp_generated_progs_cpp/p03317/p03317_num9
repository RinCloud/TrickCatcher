#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int min_ops = (N - 1) / (K - 1);
    if ((N - 1) % (K - 1) != 0) {
        min_ops++;
    }

    cout << min_ops << endl;

    return 0;
}