#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    vector<int> X(N);
    for (int i = 0; i < N; i++) {
        cin >> X[i];
    }

    long long total_fatigue = 0;
    for (int i = 1; i < N; i++) {
        total_fatigue += min(A * (X[i] - X[i - 1]), B);
    }

    cout << total_fatigue << endl;

    return 0;
}