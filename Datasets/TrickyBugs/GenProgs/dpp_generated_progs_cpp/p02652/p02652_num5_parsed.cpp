#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    string S;
    cin >> S;

    int count_0 = 0, count_1 = 0, count_q = 0;
    for (char c : S) {
        if (c == '0') {
            count_0++;
        } else if (c == '1') {
            count_1++;
        } else {
            count_q++;
        }
    }

    int unbalancedness = INT_MAX;
    for (int i = 0; i <= count_q; i++) {
        int diff = abs(count_0 + i - count_1 - (count_q - i));
        unbalancedness = min(unbalancedness, diff);
    }

    cout << unbalancedness;

    return 0;
}