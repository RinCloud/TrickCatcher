#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int A, B, C, K;
    cin >> A >> B >> C >> K;

    int sum = 0;
    if (K <= A) {
        sum += K;
    }
    else {
        sum += A;
        K -= A;
        if (K <= B) {
            K = 0;
        }
        else {
            K -= B;
        }
        sum -= K;
    }

    cout << sum << endl;

    return 0;
}