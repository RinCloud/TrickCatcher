#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;

    int north = 0, east = 0, south = 0, west = 0;
    for (char dir : S) {
        if (dir == 'N') north++;
        else if (dir == 'E') east++;
        else if (dir == 'S') south++;
        else if (dir == 'W') west++;
    }

    if ((north > 0 && south > 0) || (north == 0 && south == 0)) {
        if ((east > 0 && west > 0) || (east == 0 && west == 0)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}