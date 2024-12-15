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

    vector<int> sorted_A(N);
    copy(A.begin(), A.end(), sorted_A.begin());
    sort(sorted_A.begin(), sorted_A.end());

    int count = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] != sorted_A[i]) {
            count++;
        }
    }

    if (count % 2 == 0) {
        cout << count / 2 << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}