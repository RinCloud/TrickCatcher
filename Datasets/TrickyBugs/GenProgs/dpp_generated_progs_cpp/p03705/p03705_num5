#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    
    if (N == 1) {
        if (A == B) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    } else if (A > B) {
        cout << 0 << endl;
    } else {
        long long int minSum = static_cast<long long int>(A) * (N - 1) + B;
        long long int maxSum = static_cast<long long int>(B) * (N - 1) + A;
        cout << maxSum - minSum + 1 << endl;
    }
    
    return 0;
}