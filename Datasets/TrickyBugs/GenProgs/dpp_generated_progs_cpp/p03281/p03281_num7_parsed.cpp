#include <iostream>
using namespace std;

int countOddNumbersWithEightDivisors(int N) {
    int count = 0;
    
    for (int i = 1; i <= N; i++) {
        int divisorCount = 0;
        
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                divisorCount++;
            }
        }
        
        if (divisorCount == 8 && i % 2 != 0) {
            count++;
        }
    }
    
    return count;
}

int main() {
    int N;
    cin >> N;
    
    cout << countOddNumbersWithEightDivisors(N) << endl;
    
    return 0;
}