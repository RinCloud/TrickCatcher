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

    long long int totalHappiness = 0;
    for (int i = 0; i < N; i++) {
        totalHappiness += A[i] * abs(i - (N - 1 - i));
    }

    cout << totalHappiness << endl;

    return 0;
}