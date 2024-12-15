#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    string S;
    
    // Reading N
    cin >> N;
    
    // Reading S
    cin >> S;

    // Check if the length of S is odd
    if (N % 2 != 0) {
        cout << "No" << endl;
        return 0;
    }

    // Check if S is a concatenation of two copies of some string
    string T = S.substr(0, N/2);
    if (S == T + T) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}