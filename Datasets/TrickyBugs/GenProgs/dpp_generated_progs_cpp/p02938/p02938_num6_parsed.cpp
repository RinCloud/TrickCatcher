#include <iostream>
using namespace std;
const int MOD = 1e9 + 7;

int main() {
    long long L, R;
    cin >> L >> R;

    long long count = 0;
    for (long long x = L; x <= R; x++){
        for (long long y = x; y <= R; y++){
            if ((y % x) == (y ^ x)) {
                count++;
            }
        }
    }

    cout << count % MOD << endl;

    return 0;
}