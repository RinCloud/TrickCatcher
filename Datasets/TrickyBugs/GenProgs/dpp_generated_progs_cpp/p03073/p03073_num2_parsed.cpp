#include<iostream>
#include<string>

using namespace std;

int minRepaintTiles(string s) {
    int count = 0;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            count++;
        }
    }
    return count;
}

int main() {
    string S;
    cin >> S;

    int result = minRepaintTiles(S);
    cout << result << endl;

    return 0;
}