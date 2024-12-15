#include<iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int cnt = 0;

    while (true) {
        if (A % 2 != 0 || B % 2 != 0 || C % 2 != 0) {
            break;
        }

        int halfA = A / 2;
        int halfB = B / 2;
        int halfC = C / 2;

        A = halfB + halfC;
        B = halfA + halfC;
        C = halfA + halfB;

        cnt++;
        
        if (A == B && B == C) {
            cnt = -1;
            break;
        }
    }

    cout << cnt << endl;

    return 0;
}