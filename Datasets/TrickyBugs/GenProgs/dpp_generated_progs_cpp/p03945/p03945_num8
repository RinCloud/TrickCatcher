#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int count = 0;
    char prev = s[0];
    for (int i = 1; i < s.length(); i++) {
        if (s[i] != prev) {
            count++;
            prev = s[i];
        }
    }

    cout << count << endl;

    return 0;
}