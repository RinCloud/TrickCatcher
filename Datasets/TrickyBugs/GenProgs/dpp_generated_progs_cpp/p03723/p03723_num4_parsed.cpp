#include<iostream>
using namespace std;

int main() {
    long long A, B, C;
    cin >> A >> B >> C;

    int count = 0;

    while (A % 2 == 0 && B % 2 == 0 && C % 2 == 0) {
        int tempA = A / 2;
        int tempB = B / 2;
        int tempC = C / 2;

        A = tempB + tempC;
        B = tempA + tempC;
        C = tempA + tempB;

        count++;

        if (A == B && B == C) {
            count = -1;
            break;
        }
    }

    cout << count << endl;

    return 0;
}