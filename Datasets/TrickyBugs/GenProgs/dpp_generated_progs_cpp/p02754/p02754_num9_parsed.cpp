#include <iostream>

using namespace std;

int main() {
    long long N, A, B;
    cin >> N >> A >> B;
    
    long long blue = 0;
    long long total = 0;
    
    for (int i = 1; i <= N; i++) {
        if (i % (A + B) <= A && total < N) {
            blue++;
        }
        total++;
    }
    
    cout << blue << endl;
    
    return 0;
}