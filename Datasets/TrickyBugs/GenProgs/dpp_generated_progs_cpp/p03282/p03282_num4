#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string S;
    long long K;
    cin >> S >> K;
    
    vector<long long> counts(10);
    for (int i = 1; i <= 9; i++) {
        counts[i] = 1;
    }
    
    long long remaining = 5e15;
    for (int i = 0; i < S.length(); i++) {
        int digit = S[i] - '0';
        remaining -= counts[digit];
        counts[digit] = 0;
        if (remaining <= 0) {
            cout << digit << endl;
            return 0;
        }
        for (int j = digit + 1; j <= 9; j++) {
            counts[j] = counts[j] * (counts[digit] + 1);
            if (counts[j] >= remaining) {
                cout << j << endl;
                return 0;
            }
            remaining -= counts[j];
        }
    }
    
    return 0;
}