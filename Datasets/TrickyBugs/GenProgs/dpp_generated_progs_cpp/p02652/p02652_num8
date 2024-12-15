#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string S;
    cin >> S;

    int count0 = 0;
    int count1 = 0;
    int countQ = 0;
    int imbalance = 0;

    for (char c : S) {
        if (c == '0') {
            count0++;
        } else if (c == '1') {
            count1++;
        } else {
            countQ++;
        }

        imbalance = max(imbalance, abs(count0 - count1));
    }

    int minUnbalancedness = imbalance + countQ;
    cout << minUnbalancedness << endl;

    return 0;
}