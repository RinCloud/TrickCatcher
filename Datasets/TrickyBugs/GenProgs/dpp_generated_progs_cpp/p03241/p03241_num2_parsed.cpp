#include <iostream>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    int gcd = 1;
    
    for (int i = 2; i <= M / N; i++) {
        if (M % i == 0) {
            gcd = i;
        }
    }
    
    cout << gcd << endl;
    
    return 0;
}
