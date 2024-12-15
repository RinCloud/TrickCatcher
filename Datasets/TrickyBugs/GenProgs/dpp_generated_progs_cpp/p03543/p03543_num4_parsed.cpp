#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    string s = to_string(N);
    bool isGood = false;
    for (int i = 0; i < 4; i++) {
        if (s[i] == s[i + 1] && s[i] == s[i + 2]) {
            isGood = true;
            break;
        }
    }

    if (isGood) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}