#include <iostream>
#include <vector>

using namespace std;

bool containsDislikedDigits(int n, vector<int>& dislikedDigits) {
    while (n > 0) {
        int digit = n % 10;
        for (int dislikedDigit : dislikedDigits) {
            if (digit == dislikedDigit) {
                return true;
            }
        }
        n /= 10;
    }
    return false;
}

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<int> dislikedDigits(K);
    for (int i = 0; i < K; i++) {
        cin >> dislikedDigits[i];
    }
    
    int amount = N;
    while (containsDislikedDigits(amount, dislikedDigits)) {
        amount++;
    }
    
    cout << amount << endl;
    
    return 0;
}
