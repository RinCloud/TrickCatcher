#include <iostream>
#include <vector>

using namespace std;

unsigned long long findNthLucasNumber(int N) {
    if (N == 0) {
        return 2;
    }
    
    unsigned long long prev1 = 1;
    unsigned long long prev2 = 2;
    unsigned long long cur = prev2;
    
    for (int i = 2; i <= N; i++) {
        cur = prev1 + prev2;
        prev1 = prev2;
        prev2 = cur;
    }
    
    return cur;
}

int main() {
    int N;
    cin >> N;
    
    unsigned long long result = findNthLucasNumber(N);
    
    cout << result << endl;
    
    return 0;
}