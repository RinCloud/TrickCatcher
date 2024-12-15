#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    // Read input
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Sort the array
    sort(A.begin(), A.end());

    // Calculate the maximum total happiness points
    long long ans = 0;
    for (int i = 0; i < N; i++) {
        ans += 1ll * A[i] * (2 * i - N + 1);
    }

    // Print the result
    cout << ans << endl;

    return 0;
}