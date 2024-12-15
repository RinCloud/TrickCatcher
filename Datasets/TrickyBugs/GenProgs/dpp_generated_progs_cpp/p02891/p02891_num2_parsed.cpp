#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    long long K;
    cin >> S >> K;

    int n = S.length();
    int cnt = 0;
    for (int i = 0; i < n - 1; i++) {
        if (S[i] == S[i + 1]) {
            cnt++;
            S[i + 1] = '*'; // Replace adjacent character to avoid consecutive duplicates
        }
    }

    int operations = cnt * K / 2; // Number of operations required to satisfy the condition

    if (S[0] != S[n - 1]) {
        cout << operations << endl;
    } else {
        int prefixCnt = 0;
        for (int i = 0; i < n; i++) {
            if (S[i] == S[0])
                prefixCnt++;
            else
                break;
        }
        int suffixCnt = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (S[i] == S[n - 1])
                suffixCnt++;
            else
                break;
        }
        operations += ((prefixCnt / 2) + (suffixCnt / 2)) * (K - 1);
        cout << operations << endl;
    }
    return 0;
}