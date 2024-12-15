#include <iostream>
using namespace std;

int findSmallestSum(int K) {
    for (int i = 1; i <= K; i++) {
        int currentSum = 0;
        int multiple = i;
        
        while (multiple > 0) {
            currentSum += multiple % 10;
            multiple /= 10;
        }
        
        if (currentSum % K == 0) {
            return currentSum;
        }
    }
    
    return -1; // No multiple found
}

int main() {
    int K;
    cin >> K;
    
    int smallestSum = findSmallestSum(K);
    cout << smallestSum << endl;
    
    return 0;
}