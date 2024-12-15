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

    sort(A.begin(), A.end());

    int mid = A[N/2];

    long long sadness = 0;
    for (int i = 0; i < N; i++) {
        sadness += abs(A[i] - (mid + i + 1));
    }

    cout << sadness << endl;

    return 0;
}