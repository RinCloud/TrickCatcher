#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string w;
    cin >> w;

    unordered_map<char, int> freq;
    for (char c : w) {
        freq[c]++;
    }

    bool beautiful = true;
    for (auto p : freq) {
        if (p.second % 2 != 0) {
            beautiful = false;
            break;
        }
    }

    if (beautiful) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}