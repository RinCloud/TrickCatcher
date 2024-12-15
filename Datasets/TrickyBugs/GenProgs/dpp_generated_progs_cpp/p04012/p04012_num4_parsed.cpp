#include <iostream>
#include <map>

using namespace std;

int main() {
    string w;
    cin >> w;
    
    map<char, int> count;
    
    for (char c : w) {
        count[c]++;
    }
    
    bool isBeautiful = true;
    
    for (const auto& pair : count) {
        if (pair.second % 2 != 0) {
            isBeautiful = false;
            break;
        }
    }
    
    if (isBeautiful) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    
    return 0;
}