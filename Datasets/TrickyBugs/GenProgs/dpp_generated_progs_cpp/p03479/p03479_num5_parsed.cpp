#include <iostream>

using namespace std;

int main() {
    long long X, Y;
    cin >> X >> Y;

    int cnt = 0;
    while (X <= Y) {
        X *= 2;
        cnt++;
    }

    cout << cnt << endl;

    return 0;
}