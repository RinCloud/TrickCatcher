#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    string w;
    cin >> w;

    unordered_map<char, int> counts;

    for (char c : w) {
        counts[c]++;
    }

    for (auto it : counts) {
        if (it.second % 2 != 0) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}