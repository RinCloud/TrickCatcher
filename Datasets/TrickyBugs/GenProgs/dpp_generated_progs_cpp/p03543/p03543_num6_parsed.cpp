#include <iostream>
#include <string>

using namespace std;

bool isGood(int n) {
    string s = to_string(n);
    
    for (int i = 0; i < s.length() - 2; i++) {
        if (s[i] == s[i + 1] && s[i] == s[i + 2]) {
            return true;
        }
    }
    
    return false;
}

int main() {
    int N;
    cin >> N;

    if (isGood(N)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}