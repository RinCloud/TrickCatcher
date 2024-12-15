#include <iostream>
#include <string>
using namespace std;

int main() {
    int K;
    cin >> K;

    string s = "7";
    int position = 1;

    while (stoi(s) % K != 0) {
        s += '7';
        position++;

        if (position > K) {
            cout << -1 << endl;
            return 0;
        }
    }

    cout << position << endl;
    return 0;
}