#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;

    int count_n = 0, count_s = 0, count_e = 0, count_w = 0;
    for (char c : S) {
        if (c == 'N') count_n++;
        if (c == 'S') count_s++;
        if (c == 'E') count_e++;
        if (c == 'W') count_w++;
    }

    if ((count_n > 0 && count_s > 0) || (count_e > 0 && count_w > 0)) {
        cout << "No";
    } else {
        cout << "Yes";
    }

    return 0;
}