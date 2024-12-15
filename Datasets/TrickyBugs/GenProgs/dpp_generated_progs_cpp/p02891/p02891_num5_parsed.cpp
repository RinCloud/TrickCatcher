#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    long long K;
    cin >> S >> K;

    int operations = 0;
    int len = S.length();

    if (len == 1) {
        operations = K / 2;
    } else {
        if (S[0] == S[len - 1]) {
            operations = 1;
        }

        int count = 0;
        for (int i = 1; i < len; i++) {
            if (S[i] != S[i - 1]) {
                count++;
            } else {
                operations++;
            }
        }

        operations *= K / 2;
        if (K % 2 == 1) {
            operations += count;
        }
    }

    cout << operations << endl;

    return 0;
}