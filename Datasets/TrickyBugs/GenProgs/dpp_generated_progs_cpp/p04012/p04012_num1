#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

string isBeautiful(string w) {
    unordered_map<char, int> count;
    
    // Count the occurrences of each letter
    for (char c : w) {
        count[c]++;
    }
    
    // Check if each letter occurs an even number of times
    for (auto it : count) {
        if (it.second % 2 != 0) {
            return "No";
        }
    }
    
    return "Yes";
}

int main() {
    string w;
    cin >> w;
    
    cout << isBeautiful(w) << endl;
    
    return 0;
}