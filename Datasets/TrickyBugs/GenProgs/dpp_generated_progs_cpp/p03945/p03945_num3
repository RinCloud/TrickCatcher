#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;
    
    int black_count = 0;
    int white_count = 0;
    
    for (char c : S) {
        if (c == 'B') {
            black_count++;
        } else if (c == 'W') {
            white_count++;
        }
    }
    
    if (black_count == 0 || white_count == 0) {
        cout << "0" << endl;
    } else if (black_count % 2 == 0) {
        cout << black_count / 2 << endl;
    } else {
        cout << (black_count / 2) + 1 << endl;
    }
    
    return 0;
}