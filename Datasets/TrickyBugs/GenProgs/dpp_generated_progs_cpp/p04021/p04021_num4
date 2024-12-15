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

    vector<int> sortedA = A;
    sort(sortedA.begin(), sortedA.end());

    int count = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] != sortedA[i]) {
            count++;
        }
    }

    cout << count / 2 << endl;

    return 0;
}