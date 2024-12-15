#include <iostream>
#include <string>

using namespace std;

int countIntegers(int N, int K) {
    int count = 0;
    
    for (int i = 1; i <= N; i++) {
        string num = to_string(i);
        int nonZeroDigits = 0;
        
        for (char digit : num) {
            if (digit != '0') {
                nonZeroDigits++;
            }
        }
        
        if (nonZeroDigits == K) {
            count++;
        }
    }
    
    return count;
}

int main() {
    int N, K;
    cin >> N >> K;
    
    int result = countIntegers(N, K);
    cout << result << endl;
    
    return 0;
}