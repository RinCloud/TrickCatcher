#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, a;
    int64_t ans = 0; // Initialize ans to 0
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> a;
        ans += a - 1;
    }
    cout << ans;
}
