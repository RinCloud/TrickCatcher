#include <iostream>
using namespace std;

string canBuyJuiceIndefinitely(long long A, long long B, long long C, long long D) {
    if (B > A)
        return "No";

    long long remaining = A % B;
    if (remaining <= C && remaining + D >= B)
        return "Yes";
    else
        return "No";
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        long long A, B, C, D;
        cin >> A >> B >> C >> D;
        cout << canBuyJuiceIndefinitely(A, B, C, D) << endl;
    }

    return 0;
}