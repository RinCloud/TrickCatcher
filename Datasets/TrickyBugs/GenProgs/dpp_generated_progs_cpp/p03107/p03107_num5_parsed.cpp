#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    cin >> S;

    int redCount = 0;
    int blueCount = 0;
    for (char c : S) {
        if (c == '0') {
            redCount++;
        } else {
            blueCount++;
        }
    }

    int minCount = min(redCount, blueCount);
    cout << minCount * 2 << endl;

    return 0;
}