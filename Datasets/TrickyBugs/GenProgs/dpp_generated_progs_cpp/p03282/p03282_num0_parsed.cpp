#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    long long K;
    cin >> S >> K;

    for (int i = 0; i < K; i++) {
        if (S[i] != '1') {
            cout << S[i] << endl;
            return 0;
        }
    }

    return 0;
}