#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    string colors;
    cin >> colors;

    int operations = 0;
    int redCount = 0;

    // Count the number of red stones
    for (int i = 0; i < N; i++) {
        if (colors[i] == 'R') {
            redCount++;
        }
    }

    // Move the red stones to the end of the row
    for (int i = 0; i < redCount; i++) {
        if (colors[i] == 'W') {
            operations++;
        }
    }
    cout << operations << endl;
    return 0;
}