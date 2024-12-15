#include <iostream>

using namespace std;

int main() {
    string S;
    cin >> S;

    int count = 0;
    int n = S.length();

    for (int i = 1; i < n; i++) {
        if (S[i] == S[i-1]) {
            count++;
            if (S[i] == '0') {
                S[i] = '1';
            } else {
                S[i] = '0';
            }
        }
    }

    cout << count << endl;

    return 0;
}