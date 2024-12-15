#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int A, B, N;
    cin >> A >> B >> N;

    int maxVal = 0;
    for (int x = 0; x <= N; x++) {
        maxVal = max(maxVal, (A * x / B) - A * (x / B));
    }

    cout << maxVal << endl;

    return 0;
}