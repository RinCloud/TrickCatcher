#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    string w;
    cin >> w;

    map<char, int> freq;

    // Count the frequency of each letter in w
    for (char c : w) {
        freq[c]++;
    }

    // Check if each letter occurs an even number of times
    bool isBeautiful = true;
    for (auto [letter, count] : freq) {
        if (count % 2 != 0) {
            isBeautiful = false;
            break;
        }
    }

    // Print the result
    cout << (isBeautiful ? "Yes" : "No") << endl;

    return 0;
}