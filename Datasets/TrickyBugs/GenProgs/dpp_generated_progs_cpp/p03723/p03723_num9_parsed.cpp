#include <iostream>
using namespace std;

int main() {
    long long A, B, C;
    cin >> A >> B >> C;
    
    int count = 0;
    while (A % 2 == 0 && B % 2 == 0 && C % 2 == 0) {
        long long newA = (B + C) / 2;
        long long newB = (A + C) / 2;
        long long newC = (A + B) / 2;
        A = newA;
        B = newB;
        C = newC;
        count++;
        
        if (A == B && B == C && C == A) {
            count = -1;
            break;
        }
    }
    
    cout << count << endl;
    
    return 0;
}