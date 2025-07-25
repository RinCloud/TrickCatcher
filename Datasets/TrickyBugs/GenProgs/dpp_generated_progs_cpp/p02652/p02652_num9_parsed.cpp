#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string S;
    cin >> S;

    int n = S.length();
    int zeroes = 0, ones = 0;
    int unbalancedness = 0;

    for (int i = 0; i < n; i++) {
        if (S[i] == '0')
            zeroes++;
        else if (S[i] == '1')
            ones++;
    }

    int current_unbalancedness = abs(zeroes - ones);
    unbalancedness = max(unbalancedness, current_unbalancedness);

    for (int i = 0; i < n; i++) {
        if (S[i] == '?') {
            if (zeroes <= ones)
                zeroes++;
            else
                ones++;
        }

        current_unbalancedness = abs(zeroes - ones);
        unbalancedness = min(unbalancedness, current_unbalancedness);
    }

    cout << unbalancedness << endl;

    return 0;
}