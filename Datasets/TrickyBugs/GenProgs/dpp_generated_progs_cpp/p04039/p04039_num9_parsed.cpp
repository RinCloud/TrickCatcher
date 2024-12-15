#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool containsDislikedDigits(int num, vector<int>& dislikedDigits) {
    while (num > 0) {
        int digit = num % 10;
        if (find(dislikedDigits.begin(), dislikedDigits.end(), digit) != dislikedDigits.end()) {
            return true;
        }
        num /= 10;
    }
    return false;
}

int findMinimumAmount(int N, vector<int>& dislikedDigits) {
    int amount = N;
    while (true) {
        if (!containsDislikedDigits(amount, dislikedDigits)) {
            return amount;
        }
        amount++;
    }
    return -1; // invalid case
}

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> dislikedDigits(K);
    for (int i = 0; i < K; i++) {
        cin >> dislikedDigits[i];
    }
    int minimumAmount = findMinimumAmount(N, dislikedDigits);
    cout << minimumAmount << endl;
    return 0;
}