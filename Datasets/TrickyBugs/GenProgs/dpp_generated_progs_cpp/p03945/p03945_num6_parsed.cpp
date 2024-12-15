#include <iostream>
#include <string>
using namespace std;

int getMinNewStones(string s) {
    int countB = 0; // count of black stones
    int countW = 0; // count of white stones
    
    for (char c : s) {
        if (c == 'B') {
            countB++;
        } else {
            countW++;
        }
    }
    
    // If all stones are already of the same color
    if (countB == 0 || countW == 0) {
        return 0;
    }
    
    // Minimum number of new stones that Jiro needs to place
    return min(countB, countW);
}

int main() {
    string s;
    cin >> s;
    
    int minNewStones = getMinNewStones(s);
    cout << minNewStones << endl;
    
    return 0;
}