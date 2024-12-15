#include <iostream>
using namespace std;

int main() {
    int A, B, C, K;
    cin >> A >> B >> C >> K;
    
    int sum = 0;
    if (K >= A) {
        sum += A;
        K -= A;
        if (K >= C) {
            sum -= C;
            K -= C;
            sum -= B;
        } else {
            sum -= K;
            K = 0;
        }
    } else {
        sum += K;
        K = 0;
    }
    
    cout << sum << endl;
    
    return 0;
}