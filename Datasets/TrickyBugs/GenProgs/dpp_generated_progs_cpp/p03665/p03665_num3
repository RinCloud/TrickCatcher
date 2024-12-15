#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, P;
    cin >> N >> P;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int ans = 0;

    // Iterate through all possible combinations of bags
    for (int mask = 0; mask < (1 << N); mask++) {
        int sum = 0;
        for (int i = 0; i < N; i++) {
            // Check if bag is selected
            if (mask & (1 << i)) {
                sum += A[i];
            }
        }

        // Check if sum modulo 2 is equal to P
        if (sum % 2 == P) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}