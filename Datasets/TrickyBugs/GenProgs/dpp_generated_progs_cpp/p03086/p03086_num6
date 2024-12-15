#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;

    int maxACGT = 0;
    int count = 0;

    for (char ch : S) {
        if (ch == 'A' || ch == 'C' || ch == 'G' || ch == 'T') {
            count++;
        } else {
            count = 0;
        }

        maxACGT = max(maxACGT, count);
    }

    cout << maxACGT << endl;

    return 0;
}