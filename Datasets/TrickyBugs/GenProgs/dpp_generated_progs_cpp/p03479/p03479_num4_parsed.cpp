#include <iostream>
using namespace std;

int main() {
    long long X, Y;
    cin >> X >> Y;

    int count = 1;
    while (X * 2 <= Y) {
        X *= 2;
        count++;
    }

    cout << count << endl;
    
    return 0;
}
