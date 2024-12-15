#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    long long ans = 0;
    long long count = 0;
    int P = 0;
    int A = 0;
    for (int i = 0; i < N; i++) {
        if (S[i] == '+') {
            A++;
        } else if (S[i] == '-') {
            A--;
        } else if (S[i] == '>') {
            P++;
        } else if (S[i] == '<') {
            P--;
        }

        if (A == P) {
            ans += count + 1;
        }

        if (i > 0 && S[i] != S[i - 1]) {
            count = 0;
        } else {
            count++;
        }
    }

    cout << ans << endl;

    return 0;
}