#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    
    int count = 0;
    while (N > 0) {
        count++;
        N /= K;
    }
    
    cout << count << endl;
    
    return 0;
}