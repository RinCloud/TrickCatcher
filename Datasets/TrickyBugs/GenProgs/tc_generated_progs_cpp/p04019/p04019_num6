#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string S;
    cin >> S;

    int N = S.size();

    int countN = 0, countS = 0, countW = 0, countE = 0;
    for (int i = 0; i < N; ++i) {
        if (S[i] == 'N') {
            countN++;
        } else if (S[i] == 'S') {
            countS++;
        } else if (S[i] == 'W') {
            countW++;
        } else if (S[i] == 'E') {
            countE++;
        }
    }

    if (countN == countS && countW == countE) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}