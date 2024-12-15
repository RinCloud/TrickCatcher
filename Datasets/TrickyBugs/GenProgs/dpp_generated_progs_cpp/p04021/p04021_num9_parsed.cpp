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

    vector<int> sorted = A;
    sort(sorted.begin(), sorted.end());

    int ans = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] != sorted[i]) {
            ans++;
        }
    }
    if (ans % 2 == 0) {
        ans /= 2;
    } else {
        ans = -1;
    }
    cout << ans << endl;

    return 0;
}