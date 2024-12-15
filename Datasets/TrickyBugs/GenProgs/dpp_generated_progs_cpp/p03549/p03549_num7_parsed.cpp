#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int total = 0;
    int remaining = M;
    
    while (remaining > 0) {
        total += 1900;
        remaining--;
    }
    
    while (N > M) {
        total += 100;
        N--;
    }
    
    cout << total << endl;
    
    return 0;
}