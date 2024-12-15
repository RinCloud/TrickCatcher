#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    string stones;
    cin >> stones;

    int redCount = 0;  // count of red stones
    int whiteCount = 0;  // count of white stones

    for (int i = 0; i < n; i++) {
        if (stones[i] == 'R') {
            redCount++;
        } else {
            whiteCount++;
        }
    }

    int operations = 0;  // minimum number of operations needed

    for (int i = 0; i < redCount; i++) {
        if (stones[i] == 'W') {
            operations++;
        }
    }

    cout << operations << endl;

    return 0;
}