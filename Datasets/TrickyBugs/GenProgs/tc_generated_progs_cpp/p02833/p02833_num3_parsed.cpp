#include <iostream>

using namespace std;

int main() {
    long N, ans = 0; // initialize ans to 0
    cin >> N;
    if (N % 2 != 0) {
        ans = 0; // assign value instead of using ==
    } else {
        for (long i = 10; i <= N; i *= 5) {
            ans += N / i;
        }
    }

    cout << ans;
}
