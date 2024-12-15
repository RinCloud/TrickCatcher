#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    string w;
    cin >> w;

    unordered_map<char, int> count;

    for (char c : w) {
        count[c]++;
    }

    bool beautiful = true;
    for (auto itr : count) {
        if (itr.second % 2 != 0) {
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