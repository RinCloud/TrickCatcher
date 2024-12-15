#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string w;
    cin >> w;

    vector<int> count(26, 0);

    // count the occurences of each letter
    for (char letter : w) {
        count[letter - 'a']++;
    }

    // check if all counts are even
    bool beautiful = true;
    for (int i = 0; i < 26; i++) {
        if (count[i] % 2 != 0) {
            beautiful = false;
            break;
        }
    }

    // print the result
    if (beautiful) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}