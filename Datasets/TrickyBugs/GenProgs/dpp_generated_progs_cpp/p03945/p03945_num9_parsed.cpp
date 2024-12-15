#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    cin >> S;
    
    int count_B = 0;
    int count_W = 0;
    
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == 'B') {
            count_B++;
        } else {
            count_W++;
        }
    }
    
    if (count_B == 0 || count_W == 0) {
        cout << 0 << endl;
    } else if (count_B % 2 == 0 && count_W % 2 == 0) {
        cout << 0 << endl;
    } else if (count_B % 2 == 1 && count_W % 2 == 1) {
        cout << 1 << endl;
    } else {
        cout << (count_B + count_W - 2) / 2 << endl;
    }
    
    return 0;
}