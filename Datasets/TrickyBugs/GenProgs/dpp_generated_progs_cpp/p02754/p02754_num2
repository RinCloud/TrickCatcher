#include <iostream>
using namespace std;

int main() {
    long long N, A, B;
    cin >> N >> A >> B;

    long long totalBalls = 0;

    while (N > 0) {
        if (N % (A + B) > A) {
            totalBalls += A;
        } else {
            totalBalls += N % (A + B);
        }
        N -= (A + B);
    }

    cout << totalBalls << endl;

    return 0;
}