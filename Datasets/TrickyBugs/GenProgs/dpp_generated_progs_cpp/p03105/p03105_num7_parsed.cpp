#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int numTimes = min(B / A, C);
    cout << numTimes;

    return 0;
}