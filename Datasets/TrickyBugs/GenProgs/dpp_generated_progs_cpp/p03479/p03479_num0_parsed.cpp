#include <iostream>
using namespace std;

int main() {
    long long int X, Y;
    cin >> X >> Y;

    int length = 1;
    while(X * 2 <= Y) {
        X *= 2;
        length++;
    }

    cout << length << endl;

    return 0;
}