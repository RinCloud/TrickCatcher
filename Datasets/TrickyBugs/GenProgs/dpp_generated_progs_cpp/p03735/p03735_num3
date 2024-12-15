#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> X(N), Y(N);
    for (int i = 0; i < N; i++) {
        cin >> X[i] >> Y[i];
    }

    sort(X.begin(), X.end());
    sort(Y.begin(), Y.end());

    long long minDiff = (long long)(X[N - 1] - X[0]) * (Y[N - 1] - Y[0]);
    for (int i = 0; i < N; i++) {
        minDiff = min(minDiff, (long long)(X[N - 1] - X[i]) * (Y[N - 1] - Y[i]));
        minDiff = min(minDiff, (long long)(X[i] - X[0]) * (Y[i] - Y[0]));
    }

    cout << minDiff << endl;

    return 0;
}