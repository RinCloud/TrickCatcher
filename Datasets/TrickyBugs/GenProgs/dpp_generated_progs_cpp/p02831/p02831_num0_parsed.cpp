#include <iostream>

using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int lcm = A * B; // assume that guests = lcm(A, B)

    // calculate the least common multiple (lcm) of A and B
    for (int i = 2; i <= min(A, B); i++) {
        while (A % i == 0 && B % i == 0) {
            lcm /= i;
            A /= i;
            B /= i;
        }
    }

    int pieces = lcm;

    cout << pieces << endl;

    return 0;
}