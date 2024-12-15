#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int maxDivisible = 1;
    int maxDivisibleCount = 0;
    
    for (int i = 1; i <= N; i++) {
        int count = 0;
        int num = i;
        
        while (num % 2 == 0) {
            count++;
            num = num / 2;
        }
        
        if (count > maxDivisibleCount) {
            maxDivisibleCount = count;
            maxDivisible = i;
        }
    }
    
    cout << maxDivisible << endl;
    
    return 0;
}