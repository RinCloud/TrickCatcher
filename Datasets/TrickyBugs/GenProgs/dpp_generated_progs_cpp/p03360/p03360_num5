#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int A, B, C, K;
    cin >> A >> B >> C >> K;
    
    int maximum = max({A, B, C});
    
    for (int i = 0; i < K; i++) {
        maximum *= 2;
    }
    
    int sum = A + B + C + maximum - max({A, B, C});
    
    cout << sum << endl;
    
    return 0;
}