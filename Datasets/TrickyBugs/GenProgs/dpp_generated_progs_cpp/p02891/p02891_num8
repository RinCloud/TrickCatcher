#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    long long K;
    cin >> S >> K;

    int N = S.length();
    int repetitions = K / 2;

    long long result = (long long)N * repetitions;

    if (K % 2 == 1) {
        bool sameCharacters = true;
        for (int i = 1; i < N; i++) {
            if (S[i] != S[i - 1]) {
                sameCharacters = false;
                break;
            }
        }

        if (sameCharacters) {
            result += (N - 1);
        }
    }

    cout << result << endl;

    return 0;
}