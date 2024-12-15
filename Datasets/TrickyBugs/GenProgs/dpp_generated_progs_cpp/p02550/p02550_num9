#include <iostream>
using namespace std;

int main() {
    long long N, X, M;
    cin >> N >> X >> M;
    
    long long A_i = X;
    long long sum = A_i;
    
    for (int i = 2; i <= N; ++i) {
        A_i = (A_i * A_i) % M;
        sum += A_i;
    }
    
    cout << sum << endl;
    
    return 0;
}