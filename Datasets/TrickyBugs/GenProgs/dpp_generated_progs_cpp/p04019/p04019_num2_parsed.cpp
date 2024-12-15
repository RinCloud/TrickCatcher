#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string S;
    cin >> S;
    
    unordered_map<char, int> directions;
    
    for (char c : S) {
        directions[c]++;
    }
    
    if (directions['N'] == directions['S'] && directions['W'] == directions['E']) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    
    return 0;
}