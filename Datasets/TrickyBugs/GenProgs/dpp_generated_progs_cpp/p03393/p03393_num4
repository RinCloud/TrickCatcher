#include <iostream>
#include <string>

using namespace std;

string getNextDiverseWord(string s) {
    // Find the first character from the end that can be incremented
    int n = s.length();
    int i = n - 1;
    while (i >= 0 && s[i] == 'z') {
        i--;
    }

    // If no such character found, it means the word is already the largest possible diverse word
    if (i == -1) {
        return "-1";
    }

    // Increment the character and reset all characters to its right
    s[i]++;
    for (int j = i + 1; j < n; j++) {
        s[j] = 'a';
    }

    return s;
}

int main() {
    string s;
    cin >> s;

    string result = getNextDiverseWord(s);
    cout << result << endl;

    return 0;
}