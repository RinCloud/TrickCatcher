#include <iostream>
#include <vector>
using namespace std;

int main() {
    string S;
    cin >> S;
    
    int countN = 0, countS = 0, countW = 0, countE = 0;
    
    for (char c : S) {
        if (c == 'N') countN++;
        else if (c == 'S') countS++;
        else if (c == 'W') countW++;
        else if (c == 'E') countE++;
    }
    
    if ((countN > 0 && countS == 0) || (countS > 0 && countN == 0) ||
        (countW > 0 && countE == 0) || (countE > 0 && countW == 0)) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
    
    return 0;
}