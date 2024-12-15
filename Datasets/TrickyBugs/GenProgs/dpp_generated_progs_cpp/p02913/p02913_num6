#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;

    vector<int> pi(N, 0);
    int len = 0;
    for (int i = 1; i < N; i++) {
        while (len > 0 && S[i] != S[len]) {
            len = pi[len - 1];
        }
        if (S[i] == S[len]) {
            len++;
        }
        pi[i] = len;
    }

    int ans = 0;
    for (int i = N - 1; i > 0; i--) {
        if (pi[i] > 0 && pi[i] > ans) {
            ans = pi[i];
        }
    }

    cout << ans << endl;

    return 0;
}