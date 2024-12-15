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

    sort(A.begin(), A.end(), greater<int>());

    long long totalHappiness = 0;
    for (int i = 0; i < N; i++) {
        totalHappiness += A[i] * (i % 2 == 0 ? 1 : -1);
    }

    cout << totalHappiness << endl;

    return 0;
}