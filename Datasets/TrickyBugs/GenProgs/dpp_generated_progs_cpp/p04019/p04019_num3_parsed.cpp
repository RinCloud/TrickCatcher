#include <iostream>
#include <unordered_map>

using namespace std;

bool isPossible(string str) {
    unordered_map<char, int> count;
    for (char c : str) {
        count[c]++;
    }
    return (count['N'] == count['S']) && (count['W'] == count['E']);
}

int main() {
    string s;
    cin >> s;

    if (isPossible(s)) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}