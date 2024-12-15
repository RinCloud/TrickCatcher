#include <iostream>
using namespace std;

// Function to calculate the number of trailing zeros in the decimal notation of f(N)
int trailingZeros(int N) {
    if (N < 2) {
        return 0;
    }
    
    int count = 0;
    for (int i = 2; i <= N; i += 2) {
        int num = i;
        while (num % 5 == 0) {
            count++;
            num /= 5;
        }
    }
    
    return count;
}

int main() {
    // Read the input N
    int N;
    cin >> N;
    
    // Calculate the number of trailing zeros
    int zeros = trailingZeros(N);
    
    // Print the result
    cout << zeros << endl;
    
    return 0;
}