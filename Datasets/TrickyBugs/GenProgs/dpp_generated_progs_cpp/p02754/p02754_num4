#include <iostream>
using namespace std;

int main() {
    long long N, A, B;
    cin >> N >> A >> B;

    long long blue = (N / (A + B)) * A;
    long long remaining = N % (A + B);

    if (remaining >= A) {
        blue += A;
    } else {
        blue += remaining;
    }

    cout << blue << endl;
    return 0;
}