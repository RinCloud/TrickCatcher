#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string S;
    long long K;
    cin >> S >> K;

    long long count = 0;
    for(char c : S) {
        if(c == '1') {
            count++;
        } else {
            break;
        }
    }

    char ans = '1';
    for(int i = 0; i < min(K, count); i++) {
        ans = S[i];
    }

    cout << ans << endl;

    return 0;
}