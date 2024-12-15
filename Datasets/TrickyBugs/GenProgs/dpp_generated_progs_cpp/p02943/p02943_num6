#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    string S;
    cin >> N >> K >> S;

    string T = S;
    reverse(T.begin(), T.end());
    string U = S + T;

    string ans = U;
    for (int i = 0; i < K; i++) {
        ans = min(ans, U.substr(i, N));
    }

    cout << ans << endl;

    return 0;
}