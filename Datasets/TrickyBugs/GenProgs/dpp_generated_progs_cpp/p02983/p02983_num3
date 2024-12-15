#include<iostream>

using namespace std;

int main() {
    int L, R;
    cin >> L >> R;

    int mod = 2019;
    int ans = mod;
    for (int i = L; i < R; i++) {
        for (int j = i + 1; j <= R; j++) {
            int temp = (i * j) % mod;
            ans = min(ans, temp);
            // Since the minimum possible value of (i * j) % 2019 is 0, 
            // we can break the inner loop if we find that value.
            if (ans == 0) break;
        }
        // If we find the minimum possible value of (i * j) % 2019 is 0, 
        // we can break the outer loop as well.
        if (ans == 0) break;
    }

    cout << ans << endl;

    return 0;
}