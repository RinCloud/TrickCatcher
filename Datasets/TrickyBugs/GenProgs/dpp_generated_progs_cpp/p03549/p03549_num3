#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int totalTime = 0;
    while (M > 0) {
        totalTime += 1900 * (1 << (M-1));
        M--;
    }
    totalTime += 100 * (N - M);

    cout << totalTime << endl;

    return 0;
}