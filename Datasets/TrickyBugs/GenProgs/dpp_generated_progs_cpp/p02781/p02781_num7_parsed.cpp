#include <iostream>
#include <cmath>
using namespace std;

int countIntegers(int N, int K) {
    int count = 0;
    
    for (int i = 1; i <= N; i++) {
        int nonZeroDigits = 0;
        int num = i;
        
        while (num > 0) {
            if (num % 10 != 0) {
                nonZeroDigits++;
            }
            num /= 10;
        }
        
        if (nonZeroDigits == K) {
            count++;
        }
    }
    
    return count;
}

int main() {
    long long N;
    int K;
    
    cin >> N >> K;
    
    int result = countIntegers(N, K);
    
    cout << result << endl;
    
    return 0;
}