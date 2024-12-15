#include <iostream>
#include <string>

using namespace std;

int main() {
    int K;
    cin >> K;

    string s = "7";
    int pos = 1;

    while (true) {
        int remainder = stoi(s) % K;
        if (remainder == 0) {
            cout << pos << endl;
            return 0;
        }

        s += '7';
        pos++;

        if (pos > K) {
            cout << -1 << endl;
            return 0;
        }
    }
}